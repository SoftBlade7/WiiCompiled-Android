#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801770AC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801770AC;

loc_801770AC:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x8002159C (7 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r11 + -24), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    }
    // end of inlined leaf 0x8002159C
    r31 = 0x80340000u;
    r0 = MemoryInline::FlatRead32((r31 + 18744));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801770CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80177274;
    }
}

loc_801770D0:
{
    r27 = 0;
    r28 = 0;
    r30 = 0;
}

loc_801770DC:
{
    r3 = MemoryInline::FlatRead32((r31 + 18744));
    r26 = (r3 + r28);
    r0 = MemoryInline::FlatRead8((r26 + 11804));
}

loc_801770EC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8017718C;
    }
}

loc_801770F0:
{
    r0 = MemoryInline::FlatRead32((r26 + 11816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(23));
}

loc_801770F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80177118;
    }
}

loc_801770FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8017710C;
    }
}

loc_80177100:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_80177104:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80177118;
    }
}

loc_80177108:
{
    goto loc_80177124;
}

loc_8017710C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(25));
}

loc_80177110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80177118;
    }
}

loc_80177114:
{
    goto loc_80177124;
}

loc_80177118:
{
    r29 = (r3 + 65536);
    r29 = (r29 + 17212);
    goto loc_8017712C;
}

loc_80177124:
{
    r29 = (r3 + 65536);
    r29 = (r29 + 17204);
}

loc_8017712C:
{
    r3 = r26;
    r4 = 0;
    ctx->lr = 0x80177138u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r26;
    ctx->lr = 0x80177140u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192D9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r26 + 11804), static_cast<uint8_t>(r30));
    r3 = MemoryInline::FlatRead32((r26 + 11812));
}

loc_8017714C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8017715C;
    }
}

loc_80177150:
{
    r0 = MemoryInline::FlatRead32((r26 + 11808));
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_80177164;
}

loc_8017715C:
{
    r0 = MemoryInline::FlatRead32((r26 + 11808));
    MemoryInline::FlatWrite32((r3 + 11808), r0);
}

loc_80177164:
{
    r3 = MemoryInline::FlatRead32((r26 + 11808));
}

loc_8017716C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_8017717C;
    }
}

loc_80177170:
{
    r0 = MemoryInline::FlatRead32((r26 + 11812));
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_80177184;
}

loc_8017717C:
{
    r0 = MemoryInline::FlatRead32((r26 + 11812));
    MemoryInline::FlatWrite32((r3 + 11812), r0);
}

loc_80177184:
{
    MemoryInline::FlatWrite32((r26 + 11808), r30);
    MemoryInline::FlatWrite32((r26 + 11812), r30);
}

loc_8017718C:
{
    r27 = (r27 + 1);
    r28 = (r28 + 11820);
}

loc_80177198:
{
    if ((static_cast<int32_t>(r27) < static_cast<int32_t>(4))) {
        goto loc_801770DC;
    }
}

loc_8017719C:
{
    r26 = 0;
    r28 = 0;
    r31 = 0;
    r30 = 0x80340000u;
}

loc_801771AC:
{
    r4 = MemoryInline::FlatRead32((r30 + 18744));
    r0 = (r4 + 65536);
    r3 = (r0 + r28);
    r0 = MemoryInline::FlatRead8((r3 + -6452));
    r27 = (r3 + -18256);
}

loc_801771C4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_80177264;
    }
}

loc_801771C8:
{
    r0 = MemoryInline::FlatRead32((r27 + 11816));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(23));
}

loc_801771D0:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801771F0;
    }
}

loc_801771D4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801771E4;
    }
}

loc_801771D8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(4));
}

loc_801771DC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801771F0;
    }
}

loc_801771E0:
{
    goto loc_801771FC;
}

loc_801771E4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(25));
}

loc_801771E8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801771F0;
    }
}

loc_801771EC:
{
    goto loc_801771FC;
}

loc_801771F0:
{
    r29 = (r4 + 65536);
    r29 = (r29 + 17212);
    goto loc_80177204;
}

loc_801771FC:
{
    r29 = (r4 + 65536);
    r29 = (r29 + 17204);
}

loc_80177204:
{
    r3 = r27;
    r4 = 0;
    ctx->lr = 0x80177210u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192E34u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    r3 = r27;
    ctx->lr = 0x80177218u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80192D9Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r26 = ctx->gpr[26];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    MemoryInline::FlatWrite8((r27 + 11804), static_cast<uint8_t>(r31));
    r3 = MemoryInline::FlatRead32((r27 + 11812));
}

loc_80177224:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80177234;
    }
}

loc_80177228:
{
    r0 = MemoryInline::FlatRead32((r27 + 11808));
    MemoryInline::FlatWrite32(r29, r0);
    goto loc_8017723C;
}

loc_80177234:
{
    r0 = MemoryInline::FlatRead32((r27 + 11808));
    MemoryInline::FlatWrite32((r3 + 11808), r0);
}

loc_8017723C:
{
    r3 = MemoryInline::FlatRead32((r27 + 11808));
}

loc_80177244:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80177254;
    }
}

loc_80177248:
{
    r0 = MemoryInline::FlatRead32((r27 + 11812));
    MemoryInline::FlatWrite32((r29 + 4), r0);
    goto loc_8017725C;
}

loc_80177254:
{
    r0 = MemoryInline::FlatRead32((r27 + 11812));
    MemoryInline::FlatWrite32((r3 + 11812), r0);
}

loc_8017725C:
{
    MemoryInline::FlatWrite32((r27 + 11808), r31);
    MemoryInline::FlatWrite32((r27 + 11812), r31);
}

loc_80177264:
{
    r26 = (r26 + 1);
    r28 = (r28 + 11820);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r26), static_cast<int32_t>(3));
}

loc_80177270:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_801771AC;
    }
}

loc_80177274:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215E8 (7 guest instruction(s))
    r26 = MemoryInline::FlatRead32((r11 + -24));
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215E8
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[26] = r26;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFE0003FB gpr_write=0xFE000BFB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801770AC func_801770AC preserves=true fpr_mask=0x00000000
