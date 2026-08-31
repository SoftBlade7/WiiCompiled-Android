#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80662588(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r12_rot_0 = 0;
    uint32_t r12_rot_1 = 0;
    uint32_t r12_rot_2 = 0;
    uint32_t r12_rot_3 = 0;
    uint32_t r12_rot_4 = 0;
    uint32_t r30_rot_0 = 0;
    uint32_t r30_rot_1 = 0;
    uint32_t r30_rot_2 = 0;
    uint32_t r30_rot_3 = 0;
    uint32_t r30_rot_4 = 0;
    uint32_t r7_rot_0 = 0;
    uint32_t r7_rot_1 = 0;
    uint32_t r7_rot_2 = 0;
    uint32_t r7_rot_3 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_80662588;

loc_80662588:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -48), 0, 56u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 52u, (r1 + 52), r0);
    r0 = 0;
    r3 = (r1 + 8);
    MemoryInline::WriteResolved32(guest_range_0, 44u, (r1 + 44), r31);
    r31 = r4;
    r4 = 12;
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 36u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 40u, (r1 + 40), r30);
        MemoryInline::WriteResolved32(guest_range_0, 36u, (r1 + 36), r29);
    }
    MemoryInline::WriteResolved32(guest_range_0, 32u, (r1 + 32), r28);
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 8u, ((static_cast<uint64_t>(static_cast<uint32_t>(r0)) << 32) | static_cast<uint32_t>(r0)))) {
        MemoryInline::WriteResolved32(guest_range_0, 8u, (r1 + 8), r0);
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r1 + 12), r0);
    }
    MemoryInline::WriteResolved32(guest_range_0, 16u, (r1 + 16), r0);
    ctx->lr = 0x806625C4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    InvokeDirectCpu<0x8065FA4Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r9 = ctx->gpr[9];
    r10 = ctx->gpr[10];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
    r0 = 12;
    r3 = (r1 + 8);
    r4 = 0;
    r5 = 0;
    r6 = 0;
    r11 = 1;
    r10 = 0x809C0000u;
    ctr = r0;
}

loc_806625E4:
{
    r12 = MemoryInline::FlatRead32((r10 + 8408));
    r0 = MemoryInline::FlatRead8(r3);
    r7 = MemoryInline::FlatRead32((r12 + 10524));
    r8 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r0));
    r7 = (r7 * 88);
    r9 = (r12 + r7);
    r7 = MemoryInline::FlatRead32((r9 + 72));
    r7 = (r8 & r7);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80662750;
    }
}

loc_80662608:
{
    r7 = MemoryInline::FlatRead32((r9 + 64));
    r6 = (r6 + 1);
}

loc_80662614:
{
    if ((static_cast<uint32_t>(r6) != static_cast<uint32_t>(r7))) {
        goto loc_80662690;
    }
}

loc_80662618:
{
    r12_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r12 = (r12_rot_2 & 510);
    r30_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r30 = (r30_rot_2 & 1020);
    r28 = 0;
    goto loc_80662654;
}

loc_80662628:
{
}

loc_8066262C:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r5))) {
        goto loc_80662648;
    }
}

loc_80662630:
{
    r8 = MemoryInline::FlatRead32(r31);
    r7 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r12));
    r5 = (r5 + 1);
    r7 = (r8 | r7);
    MemoryInline::FlatWrite32(r31, r7);
    goto loc_8066264C;
}

loc_80662648:
{
    r4 = (r4 + 1);
}

loc_8066264C:
{
    r12 = (r12 + 1);
    r28 = (r28 + 1);
}

loc_80662654:
{
    r29 = MemoryInline::FlatRead32((r10 + 8408));
    r7 = MemoryInline::FlatRead32((r29 + 10524));
    r9 = (r7 * 88);
    r8 = (r29 + r9);
    r7 = MemoryInline::FlatRead8((r8 + 89));
}

loc_8066266C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r7))) {
        goto loc_80662680;
    }
}

loc_80662670:
{
    r7 = (r30 + r29);
    r7 = (r9 + r7);
    r7 = MemoryInline::FlatRead8((r7 + 91));
    goto loc_80662684;
}

loc_80662680:
{
    r7 = MemoryInline::FlatRead8((r8 + 88));
}

loc_80662684:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r7));
}

loc_80662688:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80662628;
    }
}

loc_8066268C:
{
    goto loc_80662750;
}

loc_80662690:
{
}

loc_80662694:
{
    if ((static_cast<uint32_t>(r4) < static_cast<uint32_t>(r5))) {
        goto loc_80662700;
    }
}

loc_80662698:
{
    r12_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r12 = (r12_rot_3 & 510);
    r30_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r30 = (r30_rot_3 & 1020);
    r28 = 0;
    goto loc_806626C4;
}

loc_806626A8:
{
    r8 = MemoryInline::FlatRead32(r31);
    r7 = PPC_Slw(static_cast<uint32_t>(r11), static_cast<uint32_t>(r12));
    r28 = (r28 + 1);
    r5 = (r5 + 1);
    r7 = (r8 | r7);
    MemoryInline::FlatWrite32(r31, r7);
    r12 = (r12 + 1);
}

loc_806626C4:
{
    r29 = MemoryInline::FlatRead32((r10 + 8408));
    r7 = MemoryInline::FlatRead32((r29 + 10524));
    r9 = (r7 * 88);
    r8 = (r29 + r9);
    r7 = MemoryInline::FlatRead8((r8 + 89));
}

loc_806626DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r7))) {
        goto loc_806626F0;
    }
}

loc_806626E0:
{
    r7 = (r30 + r29);
    r7 = (r9 + r7);
    r7 = MemoryInline::FlatRead8((r7 + 91));
    goto loc_806626F4;
}

loc_806626F0:
{
    r7 = MemoryInline::FlatRead8((r8 + 88));
}

loc_806626F4:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r7));
}

loc_806626F8:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806626A8;
    }
}

loc_806626FC:
{
    goto loc_80662750;
}

loc_80662700:
{
    r7_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r7 = (r7_rot_2 & 1020);
    r9 = MemoryInline::FlatRead8((r9 + 89));
    r8 = (r7 + r12);
    r28 = 0;
    goto loc_8066271C;
}

loc_80662714:
{
    r4 = (r4 + 1);
    r28 = (r28 + 1);
}

loc_8066271C:
{
}

loc_80662720:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r9))) {
        goto loc_80662738;
    }
}

loc_80662724:
{
    r7 = MemoryInline::FlatRead32((r12 + 10524));
    r7 = (r7 * 88);
    r7 = (r7 + r8);
    r7 = MemoryInline::FlatRead8((r7 + 91));
    goto loc_80662748;
}

loc_80662738:
{
    r7 = MemoryInline::FlatRead32((r12 + 10524));
    r7 = (r7 * 88);
    r7 = (r12 + r7);
    r7 = MemoryInline::FlatRead8((r7 + 88));
}

loc_80662748:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r7));
}

loc_8066274C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80662714;
    }
}

loc_80662750:
{
    r3 = (r3 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_806625E4;
    }
}

loc_80662758:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    r29 = MemoryInline::FlatRead32((r1 + 36));
    r28 = MemoryInline::FlatRead32((r1 + 32));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80662588 func_80662588 preserves=true fpr_mask=0x00000000
