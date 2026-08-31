#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8022D730(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_stfsx_8022D974_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r3_addr_0 = 0;
    uint32_t r3_addr_1 = 0;
    uint32_t r3_addr_2 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_8022D730;

loc_8022D730:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r6;
    r6 = 6;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r0 = MemoryInline::FlatRead16((r13 + -27760));
    r4 = r0;
    r5 = r0;
    // inline leaf 0x80218098 (14 guest instruction(s))
    r8 = 0x802A0000u;
    r7 = 0;
    r0 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 20u, false, true);
    MemoryInline::WriteResolved16(guest_range_0, 0u, r3, static_cast<uint16_t>(r4));
    r8 = (r8 + 11024);
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r3 + 16), r8);
    MemoryInline::WriteResolved16(guest_range_0, 2u, (r3 + 2), static_cast<uint16_t>(r5));
    MemoryInline::WriteResolved8(guest_range_0, 5u, (r3 + 5), static_cast<uint8_t>(r6));
    MemoryInline::WriteResolved8(guest_range_0, 6u, (r3 + 6), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 7u, (r3 + 7), static_cast<uint8_t>(r7));
    MemoryInline::WriteResolved8(guest_range_0, 8u, (r3 + 8), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 9u, (r3 + 9), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved32(guest_range_0, 12u, (r3 + 12), r7);
    // end of inlined leaf 0x80218098
    r3 = 0x802A0000u;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25040));
    r3 = (r3 + 12616);
    guest_range_2 = MemoryInline::ResolveRangeHost((r31 + 16), 0, 100u, false, true);
    MemoryInline::WriteResolved32(guest_range_2, 0u, (r31 + 16), r3);
    r3 = (r3 + 20);
    r0 = 0;
    MemoryInline::WriteResolved32(guest_range_2, 24u, (r31 + 40), r3);
    r3 = r29;
    r4 = MemoryInline::FlatRead16((r30 + 20));
    MemoryInline::WriteResolved16(guest_range_2, 30u, (r31 + 46), static_cast<uint16_t>(r4));
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 32u, ((static_cast<uint64_t>(PpcBitCastToU32Inline(static_cast<float>(f0.d))) << 32) | PpcBitCastToU32Inline(static_cast<float>(f0.d))))) {
        MemoryInline::WriteResolvedFloat32(guest_range_2, 32u, (r31 + 48), f0.d);
        MemoryInline::WriteResolvedFloat32(guest_range_2, 36u, (r31 + 52), f0.d);
    }
    MemoryInline::WriteResolvedFloat32(guest_range_2, 40u, (r31 + 56), f0.d);
    if (!MemoryInline::WriteResolvedPair16(guest_range_2, 44u, ((static_cast<uint32_t>(static_cast<uint16_t>(r0)) << 16) | static_cast<uint16_t>(r0)))) {
        MemoryInline::WriteResolved16(guest_range_2, 44u, (r31 + 60), r0);
        MemoryInline::WriteResolved16(guest_range_2, 46u, (r31 + 62), r0);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_2, 52u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_2, 52u, (r31 + 68), r0);
        MemoryInline::WriteResolved32(guest_range_2, 56u, (r31 + 72), r0);
    }
    MemoryInline::WriteResolved32(guest_range_2, 60u, (r31 + 76), r0);
    MemoryInline::WriteResolved32(guest_range_2, 96u, (r31 + 112), r30);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021254u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8022D7C4:
{
    if ((static_cast<uint32_t>(r3) < static_cast<uint32_t>(31))) {
        goto loc_8022D7CC;
    }
}

loc_8022D7C8:
{
    r3 = 30;
}

loc_8022D7CC:
{
}

loc_8022D7D0:
{
    r4 = r3;
    r5 = 0;
    if ((static_cast<uint32_t>(r3) <= static_cast<uint32_t>(0))) {
        goto loc_8022D894;
    }
}

loc_8022D7DC:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(29));
    r0 = (r0_rot_1 & 536870911);
}

loc_8022D7E0:
{
    ctr = r0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8022D878;
    }
}

loc_8022D7E8:
{
    r4 = (r31 + r5);
    guest_range_1 = MemoryInline::ResolveRangeHost(r29, 0, 8u, true, false);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 0u, r29);
    MemoryInline::FlatWrite8((r4 + 80), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r4 = (r31 + r5);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 1u, (r29 + 1));
    MemoryInline::FlatWrite8((r4 + 80), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r4 = (r31 + r5);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 2u, (r29 + 2));
    MemoryInline::FlatWrite8((r4 + 80), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r4 = (r31 + r5);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 3u, (r29 + 3));
    MemoryInline::FlatWrite8((r4 + 80), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r4 = (r31 + r5);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 4u, (r29 + 4));
    MemoryInline::FlatWrite8((r4 + 80), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r4 = (r31 + r5);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 5u, (r29 + 5));
    MemoryInline::FlatWrite8((r4 + 80), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r4 = (r31 + r5);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 6u, (r29 + 6));
    MemoryInline::FlatWrite8((r4 + 80), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r4 = (r31 + r5);
    r0 = MemoryInline::ReadResolved8(guest_range_1, 7u, (r29 + 7));
    MemoryInline::FlatWrite8((r4 + 80), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r29 = (r29 + 8);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8022D7E8;
    }
}

loc_8022D870:
{
    r4 = (r3 & 7);
}

loc_8022D874:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8022D894;
    }
}

loc_8022D878:
{
    ctr = r4;
}

loc_8022D87C:
{
    r4 = (r31 + r5);
    r0 = MemoryInline::FlatRead8(r29);
    MemoryInline::FlatWrite8((r4 + 80), static_cast<uint8_t>(r0));
    r5 = (r5 + 1);
    r29 = (r29 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_8022D87C;
    }
}

loc_8022D894:
{
    r3 = (r31 + r3);
    r0 = 0;
    MemoryInline::FlatWrite8((r3 + 80), static_cast<uint8_t>(r0));
    r3 = MemoryInline::FlatRead16(r31);
    MemoryInline::FlatWrite16((r31 + 64), static_cast<uint16_t>(r28));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(256));
}

loc_8022D8AC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022D8BC;
    }
}

loc_8022D8B0:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r31 + 44), static_cast<uint8_t>(r0));
    goto loc_8022D92C;
}

loc_8022D8BC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(128));
}

loc_8022D8C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022D8CC;
    }
}

loc_8022D8C4:
{
    MemoryInline::FlatWrite8((r31 + 44), static_cast<uint8_t>(r0));
    goto loc_8022D92C;
}

loc_8022D8CC:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(64));
}

loc_8022D8D0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022D8E0;
    }
}

loc_8022D8D4:
{
    r0 = -1;
    MemoryInline::FlatWrite8((r31 + 44), static_cast<uint8_t>(r0));
    goto loc_8022D92C;
}

loc_8022D8E0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(32));
}

loc_8022D8E4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022D8F4;
    }
}

loc_8022D8E8:
{
    r0 = -2;
    MemoryInline::FlatWrite8((r31 + 44), static_cast<uint8_t>(r0));
    goto loc_8022D92C;
}

loc_8022D8F4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
}

loc_8022D8F8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022D908;
    }
}

loc_8022D8FC:
{
    r0 = -3;
    MemoryInline::FlatWrite8((r31 + 44), static_cast<uint8_t>(r0));
    goto loc_8022D92C;
}

loc_8022D908:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(8));
}

loc_8022D90C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022D91C;
    }
}

loc_8022D910:
{
    r0 = -4;
    MemoryInline::FlatWrite8((r31 + 44), static_cast<uint8_t>(r0));
    goto loc_8022D92C;
}

loc_8022D91C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r3), static_cast<uint32_t>(4));
}

loc_8022D920:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8022D92C;
    }
}

loc_8022D924:
{
    r0 = -5;
    MemoryInline::FlatWrite8((r31 + 44), static_cast<uint8_t>(r0));
}

loc_8022D92C:
{
    r0 = MemoryInline::FlatRead16((r31 + 46));
    r30 = 0;
    MemoryInline::FlatWrite8((r31 + 116), static_cast<uint8_t>(r30));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_0 & -4);
    ctx->lr = 0x8022D940u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = MemoryInline::FlatRead16((r31 + 46));
    MemoryInline::FlatWrite32((r31 + 72), r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r3 = (r3_rot_1 & -4);
    ctx->lr = 0x8022D950u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x80229DF0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r2 = ctx->gpr[2];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    MemoryInline::FlatWrite32((r31 + 76), r3);
    r5 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25036));
    r4 = 0;
    goto loc_8022D97C;
}

loc_8022D964:
{
    r3 = MemoryInline::FlatRead32((r31 + 76));
    r5 = (r5 + 1);
    r3_addr_2 = (r3 + r4);
    MemoryInline::FlatWrite32(r3_addr_2, r30);
    r3 = MemoryInline::FlatRead32((r31 + 72));
    addr_stfsx_8022D974_loc_0 = (r3 + r4);
    MemoryInline::FlatWriteFloat32(addr_stfsx_8022D974_loc_0, f0.d);
    r4 = (r4 + 4);
}

loc_8022D97C:
{
    r0 = MemoryInline::FlatRead16((r31 + 46));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_8022D984:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8022D964;
    }
}

loc_8022D988:
{
    r3 = r31;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
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
    ctx->gpr[8] = r8;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x8022D730 func_8022D730 preserves=true fpr_mask=0x00000000
