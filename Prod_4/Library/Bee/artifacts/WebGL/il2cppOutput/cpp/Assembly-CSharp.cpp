#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// Prod4.BasicGun
struct BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33;
// Prod4.Client
struct Client_t22356CFC7E623CB87ADF392F18E6E2708E150959;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// Prod4.GunDecorator
struct GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB;
// IWeapon
struct IWeapon_t61447151A8813732182487DD7027E91C4A67D436;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// System.String
struct String_t;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Prod4.WithLongBarrel
struct WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3;
// Prod4.WithScope
struct WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673;
// Prod4.WithStendo
struct WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63;

IL2CPP_EXTERN_C RuntimeClass* BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral08AA59815253594F085534131BC87C95B5B72946;
IL2CPP_EXTERN_C String_t* _stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C;
IL2CPP_EXTERN_C String_t* _stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A;
IL2CPP_EXTERN_C String_t* _stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2;
IL2CPP_EXTERN_C String_t* _stringLiteral83374AA2BFCBA84004670EF3ABFBBECF5C901268;
IL2CPP_EXTERN_C String_t* _stringLiteral84D9A650302D0FCD4E6C47486B36B6B657D67405;
IL2CPP_EXTERN_C String_t* _stringLiteral8B44958529F5D8123596660722F39859BE7E588F;
IL2CPP_EXTERN_C String_t* _stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1;
IL2CPP_EXTERN_C String_t* _stringLiteralA04D2D36DC9C99BB59AE5608B350728AA1ACA028;
IL2CPP_EXTERN_C String_t* _stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907;
IL2CPP_EXTERN_C String_t* _stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E;
IL2CPP_EXTERN_C String_t* _stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2;
IL2CPP_EXTERN_C String_t* _stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465;
IL2CPP_EXTERN_C String_t* _stringLiteralDC1199BB015F6D4B88117A6B948F5D994C8D0045;
IL2CPP_EXTERN_C String_t* _stringLiteralE8D6BCCA47C6D106EF8DA2DDAB75FBADFED4FF8F;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};
struct Il2CppArrayBounds;

// Prod4.BasicGun
struct BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33  : public RuntimeObject
{
	// System.Single Prod4.BasicGun::m_BasicAccuracy
	float ___m_BasicAccuracy_0;
	// System.Single Prod4.BasicGun::basicAmmo
	float ___basicAmmo_1;
	// System.Single Prod4.BasicGun::basicRange
	float ___basicRange_2;
	// System.String Prod4.BasicGun::prefabPath
	String_t* ___prefabPath_3;
	// UnityEngine.GameObject Prod4.BasicGun::model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___model_4;
};

// Prod4.GunDecorator
struct GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB  : public RuntimeObject
{
	// IWeapon Prod4.GunDecorator::m_DecoratedRifle
	RuntimeObject* ___m_DecoratedRifle_0;
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Prod4.WithLongBarrel
struct WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3  : public GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB
{
	// System.Single Prod4.WithLongBarrel::m_LongBarrelAccuracy
	float ___m_LongBarrelAccuracy_1;
	// System.Single Prod4.WithLongBarrel::m_LongBarrelRange
	float ___m_LongBarrelRange_2;
	// System.String Prod4.WithLongBarrel::prefabPath
	String_t* ___prefabPath_3;
	// UnityEngine.GameObject Prod4.WithLongBarrel::model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___model_4;
};

// Prod4.WithScope
struct WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673  : public GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB
{
	// System.Single Prod4.WithScope::m_ScopeAccuracy
	float ___m_ScopeAccuracy_1;
	// System.String Prod4.WithScope::prefabPath
	String_t* ___prefabPath_2;
	// UnityEngine.GameObject Prod4.WithScope::model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___model_3;
};

// Prod4.WithStendo
struct WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63  : public GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB
{
	// System.Single Prod4.WithStendo::m_StendoAmmo
	float ___m_StendoAmmo_1;
	// System.String Prod4.WithStendo::prefabPath
	String_t* ___prefabPath_2;
	// UnityEngine.GameObject Prod4.WithStendo::model
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___model_3;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// Prod4.Client
struct Client_t22356CFC7E623CB87ADF392F18E6E2708E150959  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Vector3 Prod4.Client::nextPos
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___nextPos_4;
	// IWeapon Prod4.Client::currentRifle
	RuntimeObject* ___currentRifle_5;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif


// T UnityEngine.Resources::Load<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared (String_t* ___path0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared (RuntimeObject* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method) ;

// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// T UnityEngine.Resources::Load<UnityEngine.GameObject>(System.String)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A (String_t* ___path0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (String_t*, const RuntimeMethod*))Resources_Load_TisRuntimeObject_mD1AF6299B14F87ED1D1A6199A51480919F7C79D7_gshared)(___path0, method);
}
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<UnityEngine.GameObject>(T,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___original0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position1, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m249A6BA4F2F19C2D3CE217D4D31847DF0EF03EFE_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Boolean UnityEngine.Input::GetKeyDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F (String_t* ___name0, const RuntimeMethod* method) ;
// System.Void Prod4.BasicGun::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGun__ctor_mE961E89E7E7465BFA589F81E70FD0CF1E3A106AE (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, const RuntimeMethod* method) ;
// System.String System.Single::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972 (float* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void Prod4.WithScope::.ctor(IWeapon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithScope__ctor_m4F64F5396A4BECA3F6121E6102EECC904B195BF4 (WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673* __this, RuntimeObject* ___rifle0, const RuntimeMethod* method) ;
// System.Void Prod4.WithLongBarrel::.ctor(IWeapon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLongBarrel__ctor_m1583EAD4E90B9AFC6F46FD211737A54CB05F5B18 (WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3* __this, RuntimeObject* ___rifle0, const RuntimeMethod* method) ;
// System.Void Prod4.WithStendo::.ctor(IWeapon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithStendo__ctor_m0760DBB989BC8B64253A21FC5EC9F719AC4ADCC6 (WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63* __this, RuntimeObject* ___rifle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___obj0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::get_zero()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Void Prod4.GunDecorator::.ctor(IWeapon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunDecorator__ctor_m4E6FDD347B83F70000300CB600904DB14534B540 (GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB* __this, RuntimeObject* ___rifle0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::SetParent(UnityEngine.Transform)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___p0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Transform::get_parent()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// System.Single Prod4.GunDecorator::GetAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GunDecorator_GetAccuracy_m5A790202307A7AD9F990DD04B3A51DF8F37414CD (GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB* __this, const RuntimeMethod* method) ;
// System.Single Prod4.GunDecorator::GetRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GunDecorator_GetRange_m7007642E852CAF4B59D27C9B6B6B3DF6EC19B367 (GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB* __this, const RuntimeMethod* method) ;
// System.Single Prod4.GunDecorator::GetAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GunDecorator_GetAmmo_m78A81C5283A9D3BB1636281A88EEF7A47C0C26FD (GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB* __this, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Prod4.BasicGun::GetAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BasicGun_GetAccuracy_m7181657A1CFE768AD643F78AFD9A0CF2637618EF (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* __this, const RuntimeMethod* method) 
{
	{
		// return m_BasicAccuracy;
		float L_0 = __this->___m_BasicAccuracy_0;
		return L_0;
	}
}
// System.Single Prod4.BasicGun::GetAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BasicGun_GetAmmo_m893E1BDA2A711394671562D2149B64D263E91358 (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* __this, const RuntimeMethod* method) 
{
	{
		// return basicAmmo;
		float L_0 = __this->___basicAmmo_1;
		return L_0;
	}
}
// System.Single Prod4.BasicGun::GetRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float BasicGun_GetRange_m1733E70C98AEDA579356948C26EF1572431B09D9 (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* __this, const RuntimeMethod* method) 
{
	{
		// return basicRange;
		float L_0 = __this->___basicRange_2;
		return L_0;
	}
}
// UnityEngine.GameObject Prod4.BasicGun::GetGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* BasicGun_GetGameObject_mD090656D19F2FDB8AFA96050EBC044DEA095BFF9 (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* __this, const RuntimeMethod* method) 
{
	{
		// return model;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___model_4;
		return L_0;
	}
}
// System.Void Prod4.BasicGun::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGun__ctor_mB854630D8191AAF90A751616C01D48B31D24D07A (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// float m_BasicAccuracy = 5.0f;
		__this->___m_BasicAccuracy_0 = (5.0f);
		// float basicAmmo = 20.0f;
		__this->___basicAmmo_1 = (20.0f);
		// float basicRange = 15.0f;
		__this->___basicRange_2 = (15.0f);
		// string prefabPath = "Gun";
		__this->___prefabPath_3 = _stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefabPath_3), (void*)_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2);
		// public BasicGun()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// GameObject prefab = Resources.Load<GameObject>(prefabPath);
		String_t* L_0 = __this->___prefabPath_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(L_0, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		V_0 = L_1;
		// model = GameObject.Instantiate(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3;
		L_3 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_2, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___model_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___model_4), (void*)L_3);
		// }
		return;
	}
}
// System.Void Prod4.BasicGun::.ctor(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BasicGun__ctor_mE961E89E7E7465BFA589F81E70FD0CF1E3A106AE (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPos0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// float m_BasicAccuracy = 5.0f;
		__this->___m_BasicAccuracy_0 = (5.0f);
		// float basicAmmo = 20.0f;
		__this->___basicAmmo_1 = (20.0f);
		// float basicRange = 15.0f;
		__this->___basicRange_2 = (15.0f);
		// string prefabPath = "Gun";
		__this->___prefabPath_3 = _stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefabPath_3), (void*)_stringLiteralBDA965B372B3355FEDEC8D365FE940DD946ADBB2);
		// public BasicGun(Vector3 worldPos)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// GameObject prefab = Resources.Load<GameObject>(prefabPath);
		String_t* L_0 = __this->___prefabPath_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(L_0, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		V_0 = L_1;
		// model = GameObject.Instantiate(prefab, worldPos, prefab.transform.rotation);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___worldPos0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = V_0;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_5;
		L_5 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_4, NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_6;
		L_6 = Transform_get_rotation_m32AF40CA0D50C797DA639A696F8EAEC7524C179C(L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4(L_2, L_3, L_6, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m831D2F71DF2AA6C93AFDFEFA04CF2CFC5FBBCDB4_RuntimeMethod_var);
		__this->___model_4 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___model_4), (void*)L_7);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prod4.Client::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client_Update_m0EAAE37B04CE522EFF39D535D4951375C7AA4169 (Client_t22356CFC7E623CB87ADF392F18E6E2708E150959* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral08AA59815253594F085534131BC87C95B5B72946);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B44958529F5D8123596660722F39859BE7E588F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC1199BB015F6D4B88117A6B948F5D994C8D0045);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8D6BCCA47C6D106EF8DA2DDAB75FBADFED4FF8F);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	float V_1 = 0.0f;
	RuntimeObject* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	RuntimeObject* V_7 = NULL;
	RuntimeObject* V_8 = NULL;
	{
		// if (Input.GetKeyDown("b"))
		bool L_0;
		L_0 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral4609D79FE2FAD95C38B6DA64FC671E8594984D4C, NULL);
		if (!L_0)
		{
			goto IL_0061;
		}
	}
	{
		// IWeapon rifle = new BasicGun(nextPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = __this->___nextPos_4;
		BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* L_2 = (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33*)il2cpp_codegen_object_new(BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33_il2cpp_TypeInfo_var);
		BasicGun__ctor_mE961E89E7E7465BFA589F81E70FD0CF1E3A106AE(L_2, L_1, NULL);
		V_0 = L_2;
		// currentRifle = rifle;
		RuntimeObject* L_3 = V_0;
		__this->___currentRifle_5 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRifle_5), (void*)L_3);
		// Debug.Log("Basic accuracy: " + rifle.GetAccuracy());
		RuntimeObject* L_4 = V_0;
		float L_5;
		L_5 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single IWeapon::GetAccuracy() */, IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var, L_4);
		V_1 = L_5;
		String_t* L_6;
		L_6 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		String_t* L_7;
		L_7 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralE8D6BCCA47C6D106EF8DA2DDAB75FBADFED4FF8F, L_6, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_7, NULL);
		// nextPos += new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = __this->___nextPos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10;
		L_10 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_8, L_9, NULL);
		__this->___nextPos_4 = L_10;
	}

IL_0061:
	{
		// if (Input.GetKeyDown("s"))
		bool L_11;
		L_11 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralDAF2BD03270A51BF9C135F3694DCAD2D3E66F465, NULL);
		if (!L_11)
		{
			goto IL_00c9;
		}
	}
	{
		// IWeapon rifle = new BasicGun(nextPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12 = __this->___nextPos_4;
		BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* L_13 = (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33*)il2cpp_codegen_object_new(BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33_il2cpp_TypeInfo_var);
		BasicGun__ctor_mE961E89E7E7465BFA589F81E70FD0CF1E3A106AE(L_13, L_12, NULL);
		V_2 = L_13;
		// rifle = new WithScope(rifle);
		RuntimeObject* L_14 = V_2;
		WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673* L_15 = (WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673*)il2cpp_codegen_object_new(WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673_il2cpp_TypeInfo_var);
		WithScope__ctor_m4F64F5396A4BECA3F6121E6102EECC904B195BF4(L_15, L_14, NULL);
		V_2 = L_15;
		// currentRifle = rifle;
		RuntimeObject* L_16 = V_2;
		__this->___currentRifle_5 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRifle_5), (void*)L_16);
		// Debug.Log("WithScope accuracy: " + rifle.GetAccuracy());
		RuntimeObject* L_17 = V_2;
		float L_18;
		L_18 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single IWeapon::GetAccuracy() */, IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var, L_17);
		V_1 = L_18;
		String_t* L_19;
		L_19 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral8B44958529F5D8123596660722F39859BE7E588F, L_19, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_20, NULL);
		// nextPos += new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_21 = __this->___nextPos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_22;
		memset((&L_22), 0, sizeof(L_22));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_22), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_23;
		L_23 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_21, L_22, NULL);
		__this->___nextPos_4 = L_23;
	}

IL_00c9:
	{
		// if (Input.GetKeyDown("t"))
		bool L_24;
		L_24 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral6B866DCFF4A3EC3D3C30879F029D88106601B1B2, NULL);
		if (!L_24)
		{
			goto IL_0136;
		}
	}
	{
		// IWeapon rifle = new BasicGun(nextPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_25 = __this->___nextPos_4;
		BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* L_26 = (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33*)il2cpp_codegen_object_new(BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33_il2cpp_TypeInfo_var);
		BasicGun__ctor_mE961E89E7E7465BFA589F81E70FD0CF1E3A106AE(L_26, L_25, NULL);
		V_3 = L_26;
		// rifle = new WithScope(new WithLongBarrel(rifle));
		RuntimeObject* L_27 = V_3;
		WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3* L_28 = (WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3*)il2cpp_codegen_object_new(WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3_il2cpp_TypeInfo_var);
		WithLongBarrel__ctor_m1583EAD4E90B9AFC6F46FD211737A54CB05F5B18(L_28, L_27, NULL);
		WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673* L_29 = (WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673*)il2cpp_codegen_object_new(WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673_il2cpp_TypeInfo_var);
		WithScope__ctor_m4F64F5396A4BECA3F6121E6102EECC904B195BF4(L_29, L_28, NULL);
		V_3 = L_29;
		// currentRifle = rifle;
		RuntimeObject* L_30 = V_3;
		__this->___currentRifle_5 = L_30;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRifle_5), (void*)L_30);
		// Debug.Log("long Barrel+Scope accuracy: " + rifle.GetAccuracy());
		RuntimeObject* L_31 = V_3;
		float L_32;
		L_32 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single IWeapon::GetAccuracy() */, IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var, L_31);
		V_1 = L_32;
		String_t* L_33;
		L_33 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		String_t* L_34;
		L_34 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteralDC1199BB015F6D4B88117A6B948F5D994C8D0045, L_33, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_34, NULL);
		// nextPos += new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = __this->___nextPos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		memset((&L_36), 0, sizeof(L_36));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_36), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_37;
		L_37 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_35, L_36, NULL);
		__this->___nextPos_4 = L_37;
	}

IL_0136:
	{
		// if (Input.GetKeyDown("y"))
		bool L_38;
		L_38 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral9384C6EF2DA5C0BD5274A0DACFF291D0ABBFD8B1, NULL);
		if (!L_38)
		{
			goto IL_01a8;
		}
	}
	{
		// IWeapon rifle = new BasicGun(nextPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_39 = __this->___nextPos_4;
		BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* L_40 = (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33*)il2cpp_codegen_object_new(BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33_il2cpp_TypeInfo_var);
		BasicGun__ctor_mE961E89E7E7465BFA589F81E70FD0CF1E3A106AE(L_40, L_39, NULL);
		V_4 = L_40;
		// rifle = new WithLongBarrel(new WithScope(rifle));
		RuntimeObject* L_41 = V_4;
		WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673* L_42 = (WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673*)il2cpp_codegen_object_new(WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673_il2cpp_TypeInfo_var);
		WithScope__ctor_m4F64F5396A4BECA3F6121E6102EECC904B195BF4(L_42, L_41, NULL);
		WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3* L_43 = (WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3*)il2cpp_codegen_object_new(WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3_il2cpp_TypeInfo_var);
		WithLongBarrel__ctor_m1583EAD4E90B9AFC6F46FD211737A54CB05F5B18(L_43, L_42, NULL);
		V_4 = L_43;
		// currentRifle = rifle;
		RuntimeObject* L_44 = V_4;
		__this->___currentRifle_5 = L_44;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRifle_5), (void*)L_44);
		// Debug.Log("Scope+Stabilizer accuracy: " + rifle.GetAccuracy());
		RuntimeObject* L_45 = V_4;
		float L_46;
		L_46 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single IWeapon::GetAccuracy() */, IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var, L_45);
		V_1 = L_46;
		String_t* L_47;
		L_47 = Single_ToString_mE282EDA9CA4F7DF88432D807732837A629D04972((&V_1), NULL);
		String_t* L_48;
		L_48 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral08AA59815253594F085534131BC87C95B5B72946, L_47, NULL);
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(L_48, NULL);
		// nextPos += new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_49 = __this->___nextPos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_50;
		memset((&L_50), 0, sizeof(L_50));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_50), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_51;
		L_51 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_49, L_50, NULL);
		__this->___nextPos_4 = L_51;
	}

IL_01a8:
	{
		// if (Input.GetKeyDown("a"))
		bool L_52;
		L_52 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral0A04B971B03DA607CE6C455184037B660CA89F78, NULL);
		if (!L_52)
		{
			goto IL_01f7;
		}
	}
	{
		// IWeapon rifle = new BasicGun(nextPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_53 = __this->___nextPos_4;
		BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* L_54 = (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33*)il2cpp_codegen_object_new(BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33_il2cpp_TypeInfo_var);
		BasicGun__ctor_mE961E89E7E7465BFA589F81E70FD0CF1E3A106AE(L_54, L_53, NULL);
		V_5 = L_54;
		// rifle = new WithStendo(rifle);
		RuntimeObject* L_55 = V_5;
		WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63* L_56 = (WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63*)il2cpp_codegen_object_new(WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63_il2cpp_TypeInfo_var);
		WithStendo__ctor_m0760DBB989BC8B64253A21FC5EC9F719AC4ADCC6(L_56, L_55, NULL);
		V_5 = L_56;
		// currentRifle = rifle;
		RuntimeObject* L_57 = V_5;
		__this->___currentRifle_5 = L_57;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRifle_5), (void*)L_57);
		// nextPos += new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_58 = __this->___nextPos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_59;
		memset((&L_59), 0, sizeof(L_59));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_59), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_60;
		L_60 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_58, L_59, NULL);
		__this->___nextPos_4 = L_60;
	}

IL_01f7:
	{
		// if (Input.GetKeyDown("w"))
		bool L_61;
		L_61 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralA9FEAF5F50923952C1AC3A473DE3C7E17D23B907, NULL);
		if (!L_61)
		{
			goto IL_024b;
		}
	}
	{
		// IWeapon rifle = new BasicGun(nextPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_62 = __this->___nextPos_4;
		BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* L_63 = (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33*)il2cpp_codegen_object_new(BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33_il2cpp_TypeInfo_var);
		BasicGun__ctor_mE961E89E7E7465BFA589F81E70FD0CF1E3A106AE(L_63, L_62, NULL);
		V_6 = L_63;
		// rifle = new WithStendo(new WithScope(rifle));
		RuntimeObject* L_64 = V_6;
		WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673* L_65 = (WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673*)il2cpp_codegen_object_new(WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673_il2cpp_TypeInfo_var);
		WithScope__ctor_m4F64F5396A4BECA3F6121E6102EECC904B195BF4(L_65, L_64, NULL);
		WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63* L_66 = (WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63*)il2cpp_codegen_object_new(WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63_il2cpp_TypeInfo_var);
		WithStendo__ctor_m0760DBB989BC8B64253A21FC5EC9F719AC4ADCC6(L_66, L_65, NULL);
		V_6 = L_66;
		// currentRifle = rifle;
		RuntimeObject* L_67 = V_6;
		__this->___currentRifle_5 = L_67;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRifle_5), (void*)L_67);
		// nextPos += new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_68 = __this->___nextPos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_69;
		memset((&L_69), 0, sizeof(L_69));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_69), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_70;
		L_70 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_68, L_69, NULL);
		__this->___nextPos_4 = L_70;
	}

IL_024b:
	{
		// if (Input.GetKeyDown("l"))
		bool L_71;
		L_71 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteralB9D3D73187778AF6D06AB846BD78D488ADBFB70E, NULL);
		if (!L_71)
		{
			goto IL_029f;
		}
	}
	{
		// IWeapon rifle = new BasicGun(nextPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_72 = __this->___nextPos_4;
		BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* L_73 = (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33*)il2cpp_codegen_object_new(BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33_il2cpp_TypeInfo_var);
		BasicGun__ctor_mE961E89E7E7465BFA589F81E70FD0CF1E3A106AE(L_73, L_72, NULL);
		V_7 = L_73;
		// rifle = new WithStendo(new WithLongBarrel(rifle));
		RuntimeObject* L_74 = V_7;
		WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3* L_75 = (WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3*)il2cpp_codegen_object_new(WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3_il2cpp_TypeInfo_var);
		WithLongBarrel__ctor_m1583EAD4E90B9AFC6F46FD211737A54CB05F5B18(L_75, L_74, NULL);
		WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63* L_76 = (WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63*)il2cpp_codegen_object_new(WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63_il2cpp_TypeInfo_var);
		WithStendo__ctor_m0760DBB989BC8B64253A21FC5EC9F719AC4ADCC6(L_76, L_75, NULL);
		V_7 = L_76;
		// currentRifle = rifle;
		RuntimeObject* L_77 = V_7;
		__this->___currentRifle_5 = L_77;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRifle_5), (void*)L_77);
		// nextPos += new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_78 = __this->___nextPos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_79;
		memset((&L_79), 0, sizeof(L_79));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_79), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_80;
		L_80 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_78, L_79, NULL);
		__this->___nextPos_4 = L_80;
	}

IL_029f:
	{
		// if (Input.GetKeyDown("e"))
		bool L_81;
		L_81 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, NULL);
		if (!L_81)
		{
			goto IL_02f8;
		}
	}
	{
		// IWeapon rifle = new BasicGun(nextPos);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_82 = __this->___nextPos_4;
		BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33* L_83 = (BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33*)il2cpp_codegen_object_new(BasicGun_tD015F2AC0943DCC2A68537F73897C73E85C3EF33_il2cpp_TypeInfo_var);
		BasicGun__ctor_mE961E89E7E7465BFA589F81E70FD0CF1E3A106AE(L_83, L_82, NULL);
		V_8 = L_83;
		// rifle = new WithStendo(new WithLongBarrel(new WithScope(rifle)));
		RuntimeObject* L_84 = V_8;
		WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673* L_85 = (WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673*)il2cpp_codegen_object_new(WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673_il2cpp_TypeInfo_var);
		WithScope__ctor_m4F64F5396A4BECA3F6121E6102EECC904B195BF4(L_85, L_84, NULL);
		WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3* L_86 = (WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3*)il2cpp_codegen_object_new(WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3_il2cpp_TypeInfo_var);
		WithLongBarrel__ctor_m1583EAD4E90B9AFC6F46FD211737A54CB05F5B18(L_86, L_85, NULL);
		WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63* L_87 = (WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63*)il2cpp_codegen_object_new(WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63_il2cpp_TypeInfo_var);
		WithStendo__ctor_m0760DBB989BC8B64253A21FC5EC9F719AC4ADCC6(L_87, L_86, NULL);
		V_8 = L_87;
		// currentRifle = rifle;
		RuntimeObject* L_88 = V_8;
		__this->___currentRifle_5 = L_88;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRifle_5), (void*)L_88);
		// nextPos += new Vector3(1, 0, 0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_89 = __this->___nextPos_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_90;
		memset((&L_90), 0, sizeof(L_90));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_90), (1.0f), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_91;
		L_91 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_89, L_90, NULL);
		__this->___nextPos_4 = L_91;
	}

IL_02f8:
	{
		// if (Input.GetKeyDown("c"))
		bool L_92;
		L_92 = Input_GetKeyDown_m789DB780D0567DCC23B501D15AABD4F2E3591A3F(_stringLiteral5B9FE05484B470B354696B4F06C3B12F71B5BB4A, NULL);
		if (!L_92)
		{
			goto IL_0323;
		}
	}
	{
		// if (currentRifle != null)
		RuntimeObject* L_93 = __this->___currentRifle_5;
		if (!L_93)
		{
			goto IL_0323;
		}
	}
	{
		// GameObject.Destroy(currentRifle.GetGameObject());
		RuntimeObject* L_94 = __this->___currentRifle_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95;
		L_95 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(3 /* UnityEngine.GameObject IWeapon::GetGameObject() */, IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var, L_94);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		Object_Destroy_mE97D0A766419A81296E8D4E5C23D01D3FE91ACBB(L_95, NULL);
		// currentRifle = null;
		__this->___currentRifle_5 = (RuntimeObject*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___currentRifle_5), (void*)(RuntimeObject*)NULL);
	}

IL_0323:
	{
		// }
		return;
	}
}
// System.Void Prod4.Client::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Client__ctor_m35CB79250290798FD9AFE1F89A4AB7F8FD07C80D (Client_t22356CFC7E623CB87ADF392F18E6E2708E150959* __this, const RuntimeMethod* method) 
{
	{
		// Vector3 nextPos = Vector3.zero;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0;
		L_0 = Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline(NULL);
		__this->___nextPos_4 = L_0;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prod4.GunDecorator::.ctor(IWeapon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GunDecorator__ctor_m4E6FDD347B83F70000300CB600904DB14534B540 (GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB* __this, RuntimeObject* ___rifle0, const RuntimeMethod* method) 
{
	{
		// public GunDecorator(IWeapon rifle)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// m_DecoratedRifle = rifle;
		RuntimeObject* L_0 = ___rifle0;
		__this->___m_DecoratedRifle_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___m_DecoratedRifle_0), (void*)L_0);
		// }
		return;
	}
}
// System.Single Prod4.GunDecorator::GetAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GunDecorator_GetAccuracy_m5A790202307A7AD9F990DD04B3A51DF8F37414CD (GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_DecoratedRifle.GetAccuracy();
		RuntimeObject* L_0 = __this->___m_DecoratedRifle_0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(0 /* System.Single IWeapon::GetAccuracy() */, IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single Prod4.GunDecorator::GetAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GunDecorator_GetAmmo_m78A81C5283A9D3BB1636281A88EEF7A47C0C26FD (GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_DecoratedRifle.GetAmmo();
		RuntimeObject* L_0 = __this->___m_DecoratedRifle_0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(1 /* System.Single IWeapon::GetAmmo() */, IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Single Prod4.GunDecorator::GetRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float GunDecorator_GetRange_m7007642E852CAF4B59D27C9B6B6B3DF6EC19B367 (GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_DecoratedRifle.GetRange();
		RuntimeObject* L_0 = __this->___m_DecoratedRifle_0;
		float L_1;
		L_1 = InterfaceFuncInvoker0< float >::Invoke(2 /* System.Single IWeapon::GetRange() */, IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// UnityEngine.GameObject Prod4.GunDecorator::GetGameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GunDecorator_GetGameObject_m86BC387A3A642D71DCC3CF557D9732B12CCBAE90 (GunDecorator_tA4B9F9FF7379A1C1D31C9D555B0FE98D5C6876DB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return m_DecoratedRifle.GetGameObject();
		RuntimeObject* L_0 = __this->___m_DecoratedRifle_0;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1;
		L_1 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(3 /* UnityEngine.GameObject IWeapon::GetGameObject() */, IWeapon_t61447151A8813732182487DD7027E91C4A67D436_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prod4.WithScope::.ctor(IWeapon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithScope__ctor_m4F64F5396A4BECA3F6121E6102EECC904B195BF4 (WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673* __this, RuntimeObject* ___rifle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral83374AA2BFCBA84004670EF3ABFBBECF5C901268);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// float m_ScopeAccuracy = 20.0f;
		__this->___m_ScopeAccuracy_1 = (20.0f);
		// string prefabPath = "Scope";
		__this->___prefabPath_2 = _stringLiteral83374AA2BFCBA84004670EF3ABFBBECF5C901268;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefabPath_2), (void*)_stringLiteral83374AA2BFCBA84004670EF3ABFBBECF5C901268);
		// public WithScope(IWeapon rifle) : base(rifle)
		RuntimeObject* L_0 = ___rifle0;
		GunDecorator__ctor_m4E6FDD347B83F70000300CB600904DB14534B540(__this, L_0, NULL);
		// GameObject prefab = Resources.Load<GameObject>(prefabPath);
		String_t* L_1 = __this->___prefabPath_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(L_1, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		V_0 = L_2;
		// model = GameObject.Instantiate(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___model_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___model_3), (void*)L_4);
		// model.transform.SetParent(GetGameObject().transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___model_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = VirtualFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(11 /* UnityEngine.GameObject Prod4.GunDecorator::GetGameObject() */, __this);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_6, L_8, NULL);
		// model.transform.position += model.transform.parent.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___model_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___model_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_16, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_17, NULL);
		// }
		return;
	}
}
// System.Single Prod4.WithScope::GetAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WithScope_GetAccuracy_m1B746DC84271955B3ED2229F7C07B2535BCE2F2B (WithScope_t056EE84B16DA01BB2F42E871C0D37C160CA47673* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetAccuracy() + m_ScopeAccuracy;
		float L_0;
		L_0 = GunDecorator_GetAccuracy_m5A790202307A7AD9F990DD04B3A51DF8F37414CD(__this, NULL);
		float L_1 = __this->___m_ScopeAccuracy_1;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prod4.WithLongBarrel::.ctor(IWeapon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithLongBarrel__ctor_m1583EAD4E90B9AFC6F46FD211737A54CB05F5B18 (WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3* __this, RuntimeObject* ___rifle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral84D9A650302D0FCD4E6C47486B36B6B657D67405);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// float m_LongBarrelAccuracy = 10.0f;
		__this->___m_LongBarrelAccuracy_1 = (10.0f);
		// float m_LongBarrelRange = 15.0f;
		__this->___m_LongBarrelRange_2 = (15.0f);
		// string prefabPath = "Long Barrel";
		__this->___prefabPath_3 = _stringLiteral84D9A650302D0FCD4E6C47486B36B6B657D67405;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefabPath_3), (void*)_stringLiteral84D9A650302D0FCD4E6C47486B36B6B657D67405);
		// public WithLongBarrel(IWeapon rifle) : base(rifle)
		RuntimeObject* L_0 = ___rifle0;
		GunDecorator__ctor_m4E6FDD347B83F70000300CB600904DB14534B540(__this, L_0, NULL);
		// GameObject prefab = Resources.Load<GameObject>(prefabPath);
		String_t* L_1 = __this->___prefabPath_3;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(L_1, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		V_0 = L_2;
		// model = GameObject.Instantiate(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___model_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___model_4), (void*)L_4);
		// model.transform.SetParent(GetGameObject().transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___model_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = VirtualFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(11 /* UnityEngine.GameObject Prod4.GunDecorator::GetGameObject() */, __this);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_6, L_8, NULL);
		// model.transform.position += model.transform.parent.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___model_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___model_4;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_16, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_17, NULL);
		// }
		return;
	}
}
// System.Single Prod4.WithLongBarrel::GetAccuracy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WithLongBarrel_GetAccuracy_m734DF3AE92CCD00DA190594D9FA084EB47F26F56 (WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetAccuracy() + m_LongBarrelAccuracy;
		float L_0;
		L_0 = GunDecorator_GetAccuracy_m5A790202307A7AD9F990DD04B3A51DF8F37414CD(__this, NULL);
		float L_1 = __this->___m_LongBarrelAccuracy_1;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
// System.Single Prod4.WithLongBarrel::GetRange()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WithLongBarrel_GetRange_m75B444C33B7DCDC85F5445E7F231D69DBDFF5A9A (WithLongBarrel_t8AF8DCFF7DA06C3A441F473C9E67D1D17E190FD3* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetRange() + m_LongBarrelRange;
		float L_0;
		L_0 = GunDecorator_GetRange_m7007642E852CAF4B59D27C9B6B6B3DF6EC19B367(__this, NULL);
		float L_1 = __this->___m_LongBarrelRange_2;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Prod4.WithStendo::.ctor(IWeapon)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WithStendo__ctor_m0760DBB989BC8B64253A21FC5EC9F719AC4ADCC6 (WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63* __this, RuntimeObject* ___rifle0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA04D2D36DC9C99BB59AE5608B350728AA1ACA028);
		s_Il2CppMethodInitialized = true;
	}
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* V_0 = NULL;
	{
		// float m_StendoAmmo = 15.0f;
		__this->___m_StendoAmmo_1 = (15.0f);
		// string prefabPath = "Stendo";
		__this->___prefabPath_2 = _stringLiteralA04D2D36DC9C99BB59AE5608B350728AA1ACA028;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___prefabPath_2), (void*)_stringLiteralA04D2D36DC9C99BB59AE5608B350728AA1ACA028);
		// public WithStendo(IWeapon rifle) : base(rifle)
		RuntimeObject* L_0 = ___rifle0;
		GunDecorator__ctor_m4E6FDD347B83F70000300CB600904DB14534B540(__this, L_0, NULL);
		// GameObject prefab = Resources.Load<GameObject>(prefabPath);
		String_t* L_1 = __this->___prefabPath_2;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2;
		L_2 = Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A(L_1, Resources_Load_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m496A3B1B60A28F5E0397043974B848C9157B625A_RuntimeMethod_var);
		V_0 = L_2;
		// model = GameObject.Instantiate(prefab);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4;
		L_4 = Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3(L_3, Object_Instantiate_TisGameObject_t76FEDD663AB33C991A9C9A23129337651094216F_m10D87C6E0708CA912BBB02555BF7D0FBC5D7A2B3_RuntimeMethod_var);
		__this->___model_3 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___model_3), (void*)L_4);
		// model.transform.SetParent(GetGameObject().transform);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = __this->___model_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_6;
		L_6 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_5, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = VirtualFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(11 /* UnityEngine.GameObject Prod4.GunDecorator::GetGameObject() */, __this);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_8;
		L_8 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_7, NULL);
		Transform_SetParent_m6677538B60246D958DD91F931C50F969CCBB5250(L_6, L_8, NULL);
		// model.transform.position += model.transform.parent.position;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___model_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10;
		L_10 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_9, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_11 = L_10;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_11, NULL);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_13 = __this->___model_3;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_14;
		L_14 = GameObject_get_transform_m0BC10ADFA1632166AE5544BDF9038A2650C2AE56(L_13, NULL);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_15;
		L_15 = Transform_get_parent_m65354E28A4C94EC00EBCF03532F7B0718380791E(L_14, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_16;
		L_16 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_15, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17;
		L_17 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_12, L_16, NULL);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_11, L_17, NULL);
		// }
		return;
	}
}
// System.Single Prod4.WithStendo::GetAmmo()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float WithStendo_GetAmmo_m36767668588B56AAE51830F37BF7821747982364 (WithStendo_t63BB7CB2629D93AD85ED45A35F522E6B5DE7BF63* __this, const RuntimeMethod* method) 
{
	{
		// return base.GetAmmo() + m_StendoAmmo;
		float L_0;
		L_0 = GunDecorator_GetAmmo_m78A81C5283A9D3BB1636281A88EEF7A47C0C26FD(__this, NULL);
		float L_1 = __this->___m_StendoAmmo_1;
		return ((float)il2cpp_codegen_add(L_0, L_1));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_get_zero_m0C1249C3F25B1C70EAD3CC8B31259975A457AE39_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ((Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields*)il2cpp_codegen_static_fields_for(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_il2cpp_TypeInfo_var))->___zeroVector_5;
		V_0 = L_0;
		goto IL_0009;
	}

IL_0009:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1 = V_0;
		return L_1;
	}
}
