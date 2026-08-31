#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806651B4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;
    uint32_t r6_rot_0 = 0;
    uint32_t r6_rot_1 = 0;
    uint32_t r6_rot_2 = 0;
    uint32_t r6_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r26 = ctx->gpr[26];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806651B4;

loc_806651B4:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -32), 0, 40u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r0);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r26)) << 32) | static_cast<uint32_t>(r27)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r26);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r27);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 16u, ((static_cast<uint64_t>(static_cast<uint32_t>(r28)) << 32) | static_cast<uint32_t>(r29)))) {
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r28);
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r1 + 20), r29);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 24u, ((static_cast<uint64_t>(static_cast<uint32_t>(r30)) << 32) | static_cast<uint32_t>(r31)))) {
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r1 + 24), r30);
        MemoryInline::WriteResolved32(guest_range_0, 28u, (r1 + 28), r31);
    }
    r27 = r3;
    r29 = 0;
    r30 = 0x809C0000u;
    r31 = 1;
}

loc_806651D4:
{
    r7 = MemoryInline::FlatRead32((r30 + 8408));
    r0 = (r29 & 255);
    r0 = PPC_Slw(static_cast<uint32_t>(r31), static_cast<uint32_t>(r0));
    r3 = MemoryInline::FlatRead32((r7 + 10524));
    r3 = (r3 * 88);
    r4 = (r7 + r3);
    r3 = MemoryInline::FlatRead32((r4 + 72));
    r3 = (r0 & r3);
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80665314;
    }
}

loc_806651F8:
{
    r3 = MemoryInline::FlatRead8((r4 + 89));
}

loc_80665200:
{
    if ((static_cast<uint32_t>(r29) == static_cast<uint32_t>(r3))) {
        goto loc_80665314;
    }
}

loc_80665204:
{
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(5));
    r5 = (r5_rot_2 & 8160);
    r6_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(2));
    r6 = (r6_rot_2 & 1020);
    r3 = (r7 + r5);
    r4 = MemoryInline::FlatRead32((r3 + 10144));
    r3 = (r6 + r7);
    r4 = (r4 * 48);
    r3 = (r4 + r3);
    r3 = MemoryInline::FlatRead32((r3 + 336));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 8));
}

loc_80665230:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_80665314;
    }
}

loc_80665234:
{
    r3 = MemoryInline::FlatRead32((r27 + 4));
}

loc_8066523C:
{
    r3 = (r3 | r0);
    MemoryInline::FlatWrite32((r27 + 4), r3);
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(40))) {
        goto loc_80665314;
    }
}

loc_80665248:
{
    r4 = MemoryInline::FlatRead32((r30 + 8408));
    r3 = MemoryInline::FlatRead32((r27 + 8));
    r5 = (r4 + r5);
    r4 = (r6 + r4);
    r5 = MemoryInline::FlatRead32((r5 + 10144));
    r3 = (r3 | r0);
    r5 = (r5 * 48);
    r4 = (r5 + r4);
    r4 = MemoryInline::FlatRead32((r4 + 336));
    r4 = MemoryInline::FlatRead32((r4 + 4));
    r28 = MemoryInline::FlatRead32(r4);
    MemoryInline::FlatWrite32((r27 + 8), r3);
    r3 = MemoryInline::FlatRead8((r28 + 23));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
}

loc_80665280:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80665290;
    }
}

loc_80665284:
{
    r3 = MemoryInline::FlatRead32((r27 + 12));
    r0 = (r3 | r0);
    MemoryInline::FlatWrite32((r27 + 12), r0);
}

loc_80665290:
{
    r3 = (r29 & 255);
    r0 = MemoryInline::FlatRead32(r28);
    r3 = (r3 * 48);
    r4 = (r28 + 24);
    r5 = 12;
    r26 = (r27 + r3);
    MemoryInline::FlatWrite32((r26 + 32), r0);
    r3 = (r26 + 64);
    r0 = MemoryInline::FlatRead8((r28 + 22));
    MemoryInline::FlatWrite32((r26 + 52), r0);
    r0 = MemoryInline::FlatRead32((r28 + 8));
    MemoryInline::FlatWrite32((r26 + 56), r0);
    r0 = MemoryInline::FlatRead32((r28 + 4));
    MemoryInline::FlatWrite32((r26 + 60), r0);
    r0 = MemoryInline::FlatRead8((r28 + 36));
    MemoryInline::FlatWrite8((r26 + 76), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    InvokeDirectCpu<0x80005F34u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = MemoryInline::FlatRead16((r28 + 14));
    r0 = (r3 & 255);
    MemoryInline::FlatWrite32((r26 + 36), r0);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_2 & 255);
    MemoryInline::FlatWrite32((r26 + 44), r0);
    r0 = MemoryInline::FlatRead8((r28 + 20));
    MemoryInline::FlatWrite8((r26 + 77), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16((r28 + 16));
    r0 = (r3 & 255);
    MemoryInline::FlatWrite32((r26 + 40), r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 255);
    MemoryInline::FlatWrite32((r26 + 48), r0);
    r0 = MemoryInline::FlatRead8((r28 + 21));
    MemoryInline::FlatWrite8((r26 + 78), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead32((r28 + 8));
    MemoryInline::FlatWrite32((r26 + 56), r0);
}

loc_80665314:
{
    r29 = (r29 + 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r29), static_cast<uint32_t>(12));
}

loc_8066531C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806651D4;
    }
}

loc_80665320:
{
    r26 = MemoryInline::FlatRead32((r1 + 8));
    r27 = MemoryInline::FlatRead32((r1 + 12));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
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

// RECOMP_GUEST_ABI gpr_read=0xFC0000FB gpr_write=0xFC0000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x806651B4 func_806651B4 preserves=true fpr_mask=0x00000000
