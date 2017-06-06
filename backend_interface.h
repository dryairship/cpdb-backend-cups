/*
 * Generated by gdbus-codegen 2.50.2. DO NOT EDIT.
 *
 * The license of this code is the same as for the source it was derived from.
 */

#ifndef __BACKEND_INTERFACE_H__
#define __BACKEND_INTERFACE_H__

#include <gio/gio.h>

G_BEGIN_DECLS


/* ------------------------------------------------------------------------ */
/* Declarations for org.openprinting.PrintBackend */

#define TYPE_PRINT_BACKEND (print_backend_get_type ())
#define PRINT_BACKEND(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PRINT_BACKEND, PrintBackend))
#define IS_PRINT_BACKEND(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PRINT_BACKEND))
#define PRINT_BACKEND_GET_IFACE(o) (G_TYPE_INSTANCE_GET_INTERFACE ((o), TYPE_PRINT_BACKEND, PrintBackendIface))

struct _PrintBackend;
typedef struct _PrintBackend PrintBackend;
typedef struct _PrintBackendIface PrintBackendIface;

struct _PrintBackendIface
{
  GTypeInterface parent_iface;


  gboolean (*handle_get_printer_option_value) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name,
    const gchar *arg_option_name);

  gboolean (*handle_list_printer_options) (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *arg_printer_name);

  void (*printer_added) (
    PrintBackend *object,
    const gchar *arg_printer_name);

  void (*printer_removed) (
    PrintBackend *object,
    const gchar *arg_printer_name);

  void (*printer_status_changed) (
    PrintBackend *object,
    const gchar *arg_printer_name);

};

GType print_backend_get_type (void) G_GNUC_CONST;

GDBusInterfaceInfo *print_backend_interface_info (void);
guint print_backend_override_properties (GObjectClass *klass, guint property_id_begin);


/* D-Bus method call completion functions: */
void print_backend_complete_list_printer_options (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    GVariant *printer_options);

void print_backend_complete_get_printer_option_value (
    PrintBackend *object,
    GDBusMethodInvocation *invocation,
    const gchar *option_value);



/* D-Bus signal emissions functions: */
void print_backend_emit_printer_added (
    PrintBackend *object,
    const gchar *arg_printer_name);

void print_backend_emit_printer_removed (
    PrintBackend *object,
    const gchar *arg_printer_name);

void print_backend_emit_printer_status_changed (
    PrintBackend *object,
    const gchar *arg_printer_name);



/* D-Bus method calls: */
void print_backend_call_list_printer_options (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_list_printer_options_finish (
    PrintBackend *proxy,
    GVariant **out_printer_options,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_list_printer_options_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    GVariant **out_printer_options,
    GCancellable *cancellable,
    GError **error);

void print_backend_call_get_printer_option_value (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_option_name,
    GCancellable *cancellable,
    GAsyncReadyCallback callback,
    gpointer user_data);

gboolean print_backend_call_get_printer_option_value_finish (
    PrintBackend *proxy,
    gchar **out_option_value,
    GAsyncResult *res,
    GError **error);

gboolean print_backend_call_get_printer_option_value_sync (
    PrintBackend *proxy,
    const gchar *arg_printer_name,
    const gchar *arg_option_name,
    gchar **out_option_value,
    GCancellable *cancellable,
    GError **error);



/* ---- */

#define TYPE_PRINT_BACKEND_PROXY (print_backend_proxy_get_type ())
#define PRINT_BACKEND_PROXY(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PRINT_BACKEND_PROXY, PrintBackendProxy))
#define PRINT_BACKEND_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PRINT_BACKEND_PROXY, PrintBackendProxyClass))
#define PRINT_BACKEND_PROXY_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PRINT_BACKEND_PROXY, PrintBackendProxyClass))
#define IS_PRINT_BACKEND_PROXY(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PRINT_BACKEND_PROXY))
#define IS_PRINT_BACKEND_PROXY_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PRINT_BACKEND_PROXY))

typedef struct _PrintBackendProxy PrintBackendProxy;
typedef struct _PrintBackendProxyClass PrintBackendProxyClass;
typedef struct _PrintBackendProxyPrivate PrintBackendProxyPrivate;

struct _PrintBackendProxy
{
  /*< private >*/
  GDBusProxy parent_instance;
  PrintBackendProxyPrivate *priv;
};

struct _PrintBackendProxyClass
{
  GDBusProxyClass parent_class;
};

GType print_backend_proxy_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PrintBackendProxy, g_object_unref)
#endif

void print_backend_proxy_new (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PrintBackend *print_backend_proxy_new_finish (
    GAsyncResult        *res,
    GError             **error);
PrintBackend *print_backend_proxy_new_sync (
    GDBusConnection     *connection,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);

void print_backend_proxy_new_for_bus (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GAsyncReadyCallback  callback,
    gpointer             user_data);
PrintBackend *print_backend_proxy_new_for_bus_finish (
    GAsyncResult        *res,
    GError             **error);
PrintBackend *print_backend_proxy_new_for_bus_sync (
    GBusType             bus_type,
    GDBusProxyFlags      flags,
    const gchar         *name,
    const gchar         *object_path,
    GCancellable        *cancellable,
    GError             **error);


/* ---- */

#define TYPE_PRINT_BACKEND_SKELETON (print_backend_skeleton_get_type ())
#define PRINT_BACKEND_SKELETON(o) (G_TYPE_CHECK_INSTANCE_CAST ((o), TYPE_PRINT_BACKEND_SKELETON, PrintBackendSkeleton))
#define PRINT_BACKEND_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_CAST ((k), TYPE_PRINT_BACKEND_SKELETON, PrintBackendSkeletonClass))
#define PRINT_BACKEND_SKELETON_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS ((o), TYPE_PRINT_BACKEND_SKELETON, PrintBackendSkeletonClass))
#define IS_PRINT_BACKEND_SKELETON(o) (G_TYPE_CHECK_INSTANCE_TYPE ((o), TYPE_PRINT_BACKEND_SKELETON))
#define IS_PRINT_BACKEND_SKELETON_CLASS(k) (G_TYPE_CHECK_CLASS_TYPE ((k), TYPE_PRINT_BACKEND_SKELETON))

typedef struct _PrintBackendSkeleton PrintBackendSkeleton;
typedef struct _PrintBackendSkeletonClass PrintBackendSkeletonClass;
typedef struct _PrintBackendSkeletonPrivate PrintBackendSkeletonPrivate;

struct _PrintBackendSkeleton
{
  /*< private >*/
  GDBusInterfaceSkeleton parent_instance;
  PrintBackendSkeletonPrivate *priv;
};

struct _PrintBackendSkeletonClass
{
  GDBusInterfaceSkeletonClass parent_class;
};

GType print_backend_skeleton_get_type (void) G_GNUC_CONST;

#if GLIB_CHECK_VERSION(2, 44, 0)
G_DEFINE_AUTOPTR_CLEANUP_FUNC (PrintBackendSkeleton, g_object_unref)
#endif

PrintBackend *print_backend_skeleton_new (void);


G_END_DECLS

#endif /* __BACKEND_INTERFACE_H__ */
