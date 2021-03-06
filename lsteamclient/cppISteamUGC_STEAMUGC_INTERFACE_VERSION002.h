#ifdef __cplusplus
extern "C" {
#endif
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryUserUGCRequest(void *, AccountID_t, EUserUGCList, EUGCMatchingUGCType, EUserUGCListSortOrder, AppId_t, AppId_t, uint32);
extern UGCQueryHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateQueryAllUGCRequest(void *, EUGCQuery, EUGCMatchingUGCType, AppId_t, AppId_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SendQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetQueryUGCResult(void *, UGCQueryHandle_t, uint32, SteamUGCDetails_t *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_ReleaseQueryUGCRequest(void *, UGCQueryHandle_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddRequiredTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_AddExcludedTag(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnLongDescription(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetReturnTotalOnly(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetAllowCachedResponse(void *, UGCQueryHandle_t, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetCloudFileNameFilter(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetMatchAnyTag(void *, UGCQueryHandle_t, bool);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetSearchText(void *, UGCQueryHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetRankedByTrendDays(void *, UGCQueryHandle_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_RequestUGCDetails(void *, PublishedFileId_t, uint32);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_CreateItem(void *, AppId_t, EWorkshopFileType);
extern UGCUpdateHandle_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_StartItemUpdate(void *, AppId_t, PublishedFileId_t);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTitle(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemDescription(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemVisibility(void *, UGCUpdateHandle_t, ERemoteStoragePublishedFileVisibility);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemTags(void *, UGCUpdateHandle_t, const SteamParamStringArray_t *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemContent(void *, UGCUpdateHandle_t, const char *);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SetItemPreview(void *, UGCUpdateHandle_t, const char *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubmitItemUpdate(void *, UGCUpdateHandle_t, const char *);
extern EItemUpdateStatus cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateProgress(void *, UGCUpdateHandle_t, uint64 *, uint64 *);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_SubscribeItem(void *, PublishedFileId_t);
extern SteamAPICall_t cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_UnsubscribeItem(void *, PublishedFileId_t);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetNumSubscribedItems(void *);
extern uint32 cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetSubscribedItems(void *, PublishedFileId_t *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemInstallInfo(void *, PublishedFileId_t, uint64 *, char *, uint32);
extern bool cppISteamUGC_STEAMUGC_INTERFACE_VERSION002_GetItemUpdateInfo(void *, PublishedFileId_t, bool *, bool *, uint64 *, uint64 *);
#ifdef __cplusplus
}
#endif
