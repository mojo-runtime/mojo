(require 'make-mode)

(defconst mojo/make/statements
  `("undefine" ,@makefile-gmake-statements))

(defconst mojo/make/font-lock-keywords
  (makefile-make-font-lock-keywords
    makefile-var-use-regex
    mojo/make/statements
    t))

(define-derived-mode mojo/make/mode makefile-gmake-mode "mojo makefile"
  "`makefile-mode` tweaks"
  (setq font-lock-defaults
    `(mojo/make/font-lock-keywords ,@(cdr font-lock-defaults))))

(provide 'mojo/make/mode)
