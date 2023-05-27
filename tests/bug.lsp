(defun baz ()
    (with-handler (lambda (condition) (throw 'tag "handled"))
                  (print (catch 'tag (error "error")))
                  (print (catch 'tag (error "error")))))

(defun fact (n)
    (let ((a 1))
       (labels ((rec (x)
                  (if (< x 1)
                      1
                      (* x (rec (- x 1))) )))
           (rec n))))


(defun foo ()
    (let ((error-count 0))
       (flet ((inner-handler (condition)
                  (if (< error-count 2)
                      (progn (setf error-count (+ error-count 1))
                             (continue-condition condition "inner handler continued"))
                      (signal-condition condition (condition-continuable condition))))(outer-handler (condition)
                  (continue-condition condition "outer handler continued")))
           (with-handler #'outer-handler
                         (with-handler #'inner-handler
                                       (cerror "foo" "bar")
                                       (cerror "herp" "derp")
                                       (cerror "bing" "bong"))))))

