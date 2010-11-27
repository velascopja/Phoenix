/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.12-snapshot-93040d2c716c
 *
 *     Copyright: (c) 2010 by Total Control Software
 *     License:   wxWindows License
 */

#include "sipAPI_core.h"

#line 1295 "sip/gen/event.sip"
    #include <wx/event.h>
#line 15 "sip_corewxSysColourChangedEvent.cpp"

#line 40 "sip/gen/object.sip"
    #include <wx/object.h>
#line 19 "sip_corewxSysColourChangedEvent.cpp"
#line 129 "sip/gen/event.sip"
    #include <wx/event.h>
#line 22 "sip_corewxSysColourChangedEvent.cpp"
#line 17 "sip/gen/object.sip"
    #include <wx/object.h>
#line 25 "sip_corewxSysColourChangedEvent.cpp"
#line 84 "sip/gen/object.sip"
    #include <wx/object.h>
#line 28 "sip_corewxSysColourChangedEvent.cpp"


class sipwxSysColourChangedEvent : public wxSysColourChangedEvent
{
public:
    sipwxSysColourChangedEvent();
    sipwxSysColourChangedEvent(const wxSysColourChangedEvent&);
    virtual ~sipwxSysColourChangedEvent();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    wxEvent * Clone();
    wxEventCategory GetEventCategory();
    wxClassInfo * GetClassInfo();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipwxSysColourChangedEvent(const sipwxSysColourChangedEvent &);
    sipwxSysColourChangedEvent &operator = (const sipwxSysColourChangedEvent &);

    char sipPyMethods[3];
};

sipwxSysColourChangedEvent::sipwxSysColourChangedEvent(): wxSysColourChangedEvent(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxSysColourChangedEvent::sipwxSysColourChangedEvent(const wxSysColourChangedEvent& a0): wxSysColourChangedEvent(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipwxSysColourChangedEvent::~sipwxSysColourChangedEvent()
{
    sipCommonDtor(sipPySelf);
}

wxEvent * sipwxSysColourChangedEvent::Clone()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_Clone);

    if (!sipMeth)
        return wxEvent::Clone();

    extern wxEvent * sipVH__core_1(sip_gilstate_t,PyObject *);

    return sipVH__core_1(sipGILState,sipMeth);
}

wxEventCategory sipwxSysColourChangedEvent::GetEventCategory()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_GetEventCategory);

    if (!sipMeth)
        return wxEvent::GetEventCategory();

    extern wxEventCategory sipVH__core_0(sip_gilstate_t,PyObject *);

    return sipVH__core_0(sipGILState,sipMeth);
}

wxClassInfo * sipwxSysColourChangedEvent::GetClassInfo()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_GetClassInfo);

    if (!sipMeth)
        return wxObject::GetClassInfo();

    extern wxClassInfo * sipVH__core_6(sip_gilstate_t,PyObject *);

    return sipVH__core_6(sipGILState,sipMeth);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_wxSysColourChangedEvent(void *, const sipTypeDef *);}
static void *cast_wxSysColourChangedEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_wxSysColourChangedEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_wxEvent)->ctd_cast((wxEvent *)(wxSysColourChangedEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_wxSysColourChangedEvent(void *, int);}
static void release_wxSysColourChangedEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipwxSysColourChangedEvent *>(sipCppV);
    else
        delete reinterpret_cast<wxSysColourChangedEvent *>(sipCppV);
}


extern "C" {static void dealloc_wxSysColourChangedEvent(sipSimpleWrapper *);}
static void dealloc_wxSysColourChangedEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipwxSysColourChangedEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_wxSysColourChangedEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_wxSysColourChangedEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_wxSysColourChangedEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipwxSysColourChangedEvent *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            try
            {
            sipCpp = new sipwxSysColourChangedEvent();
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const wxSysColourChangedEvent * a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_wxSysColourChangedEvent, &a0))
        {
            try
            {
            sipCpp = new sipwxSysColourChangedEvent(*a0);
            }
            catch (...)
            {
                sipRaiseUnknownException();
                return NULL;
            }

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_wxSysColourChangedEvent[] = {{19, 255, 1}};

PyDoc_STRVAR(doc_wxSysColourChangedEvent, "\1SysColourChangedEvent()\n"
    "SysColourChangedEvent(SysColourChangedEvent)");


sipClassTypeDef sipTypeDef__core_wxSysColourChangedEvent = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_wxSysColourChangedEvent,
        {0}
    },
    {
        sipNameNr_SysColourChangedEvent,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_wxSysColourChangedEvent,
    -1,
    -1,
    supers_wxSysColourChangedEvent,
    0,
    init_wxSysColourChangedEvent,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_wxSysColourChangedEvent,
    0,
    0,
    0,
    release_wxSysColourChangedEvent,
    cast_wxSysColourChangedEvent,
    0,
    0,
    0
};