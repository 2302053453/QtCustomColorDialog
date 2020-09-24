#ifndef CUSTOMWIDGETS_GLOBAL_H
#define CUSTOMWIDGETS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CUSTOMWIDGETS_LIBRARY)
#  define CUSTOMWIDGETSSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CUSTOMWIDGETSSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CUSTOMWIDGETS_GLOBAL_H
