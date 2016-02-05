
/////////////////////////////////////////////////////////////////////////////////////
// ENGINE COMMANDS //////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

DARKSDK void  dbPhyStart									( void );
DARKSDK void  dbPhyUpdate									( void );
DARKSDK void  dbPhyEnd										( void );
DARKSDK void  dbPhyClear									( void );

DARKSDK void  dbPhySetGravity								( float fX, float fY, float fZ );
DARKSDK void  dbPhySetTiming								( float fMaxTimeStep, int iMaxIterations, int iMethod );

DARKSDK void  dbPhySetSkinWidth								( float fValue );
DARKSDK void  dbPhySetDefaultSleepLinearVelocitySquared		( float fValue );
DARKSDK void  dbPhySetDefaultSleepAngularVelocitySquared	( float fValue );
DARKSDK void  dbPhySetBounceThreshold						( float fValue );
DARKSDK void  dbPhySetDynamicFriction						( float fValue );
DARKSDK void  dbPhySetStaticFriction						( float fValue );
DARKSDK void  dbPhySetMaxAngularVelocity					( float fValue );
DARKSDK void  dbPhySetContinousCD							( float fValue );
DARKSDK void  dbPhySetAdaptiveForce							( float fValue );
DARKSDK void  dbPhySetControlledFiltering					( float fValue );
DARKSDK void  dbPhySetTriggerCallback						( float fValue );

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////




/////////////////////////////////////////////////////////////////////////////////////
// ENGINE COMMANDS //////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////

float  dbPhyUpdateTime								( void );
NxVec3 dbPhyEulerFromMat44							( float *m );

/////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////
