#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_802016D8(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_802016D8;

loc_802016D8:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    r4 = 0x80360000u;
    r5 = 1;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r4 = (r4 + -20912);
}

loc_802016F4:
{
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r3))) {
        goto loc_8020172C;
    }
}

loc_80201708:
{
    r4 = (r4 + 131072);
    r0 = (r4 + 32072);
}

loc_80201714:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(r3))) {
        goto loc_8020172C;
    }
}

loc_80201718:
{
    r0 = MemoryInline::FlatRead32(r3);
    r4 = (r0 & 536870912);
    r0 = (r4 + -536870912);
}

loc_80201728:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_80201730;
    }
}

loc_8020172C:
{
    r5 = 0;
}

loc_80201730:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80201734:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201750;
    }
}

loc_80201738:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80201A50;
}

loc_80201750:
{
}

loc_80201754:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_80201760;
    }
}

loc_80201758:
{
    r31 = 0;
    goto loc_80201768;
}

loc_80201760:
{
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r31 = MemoryInline::FlatRead32((r3 + 612));
}

loc_80201768:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_8020176C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201788;
    }
}

loc_80201770:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    goto loc_80201A50;
}

loc_80201788:
{
    r3 = r31;
    ctx->lr = 0x80201790u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x80205CF8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201794:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802017B0;
    }
}

loc_8020179C:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    MemoryInline::FlatWrite32((r31 + 6228), r3);
    goto loc_80201A50;
}

loc_802017B0:
{
    r3 = r31;
    ctx->lr = 0x802017B8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F0270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_802017BC:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802017E8;
    }
}

loc_802017C0:
{
    r0 = MemoryInline::FlatRead32((r29 + 4));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_802017C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802017E8;
    }
}

loc_802017CC:
{
    r4 = 0x80360000u;
    r0 = 11;
    r4 = (r4 + -20912);
    r3 = 11;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_80201A50;
}

loc_802017E8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r29), static_cast<int32_t>(0));
}

loc_802017EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201820;
    }
}

loc_802017F0:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_802017F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201820;
    }
}

loc_802017FC:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80201804:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201820;
    }
}

loc_80201808:
{
    r0 = MemoryInline::FlatRead32(r3);
    r3 = (r0 & 1);
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80201814:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80201820;
    }
}

loc_80201818:
{
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020181C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020183C;
    }
}

loc_80201820:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_80201A50;
}

loc_8020183C:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_80201844;
    }
}

loc_80201840:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201860;
    }
}

loc_80201844:
{
    r4 = 0x80360000u;
    r0 = 10;
    r4 = (r4 + -20912);
    r3 = 10;
    MemoryInline::FlatWriteRam32((r4 + 28), r0);
    MemoryInline::FlatWrite32((r31 + 6228), r0);
    goto loc_80201A50;
}

loc_80201860:
{
    MemoryInline::FlatWrite32((r31 + 5616), r29);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r3 = MemoryInline::FlatRead16((r4 + 648));
    r0 = (r3 + -1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r3)) + static_cast<uint64_t>(static_cast<uint32_t>(-1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
}

loc_80201870:
{
    if ((static_cast<int32_t>(r0) > static_cast<int32_t>(0))) {
        goto loc_802018C0;
    }
}

loc_80201874:
{
    r0 = MemoryInline::FlatRead8((r4 + 596));
    r0 = (r0 & 25);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020187C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802018C0;
    }
}

loc_80201880:
{
    r3 = r31;
    ctx->lr = 0x80201888u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F0270u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
}

loc_8020188C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_802018C0;
    }
}

loc_80201890:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead32(r3);
    r0 = (r0 & 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020189C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_802018B0;
    }
}

loc_802018A0:
{
    r0 = MemoryInline::FlatRead32((r31 + 6236));
    r0 = (r0 & 1);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_802018AC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802018C0;
    }
}

loc_802018B0:
{
    r3 = (r3 + 56);
    r4 = 1;
    ctx->lr = 0x802018BCu;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F7C68u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r30 = r3;
}

loc_802018C0:
{
    r4 = MemoryInline::FlatRead16((r29 + 48));
}

loc_802018C8:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_8020195C;
    }
}

loc_802018CC:
{
    r5 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead16((r5 + 632));
    r0 = (r0 & 1);
}

loc_802018D8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8020191C;
    }
}

loc_802018DC:
{
    r3 = MemoryInline::FlatRead16((r5 + 634));
    r0 = 0;
    r3 = (r3 - r4);
    MemoryInline::FlatWrite16((r5 + 634), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead16((r3 + 634));
}

loc_802018FC:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80201908;
    }
}

loc_80201900:
{
    r3 = r29;
    // inline leaf 0x80207CF0 (2 guest instruction(s))
    r3 = -1;
    // end of inlined leaf 0x80207CF0
}

loc_80201908:
{
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead16((r3 + 632));
    r0 = (r0 & 65532);
    MemoryInline::FlatWrite16((r3 + 632), static_cast<uint16_t>(r0));
    goto loc_8020195C;
}

loc_8020191C:
{
    r0 = MemoryInline::FlatRead32((r5 + 640));
}

loc_80201924:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(r29))) {
        goto loc_80201930;
    }
}

loc_80201928:
{
    r30 = 25;
    goto loc_8020195C;
}

loc_80201930:
{
    r0 = 0;
    r3 = r29;
    MemoryInline::FlatWrite16((r5 + 634), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r29 + 48), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32((r29 + 8));
    MemoryInline::FlatWrite32((r4 + 640), r0);
    // inline leaf 0x80207CF0 (2 guest instruction(s))
    r3 = -1;
    // end of inlined leaf 0x80207CF0
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r0 = MemoryInline::FlatRead16((r3 + 632));
    r0 = (r0 & 65532);
    MemoryInline::FlatWrite16((r3 + 632), static_cast<uint16_t>(r0));
}

loc_8020195C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_80201960:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80201984;
    }
}

loc_80201964:
{
    r3 = 0x80360000u;
    r3 = (r3 + -20912);
    MemoryInline::FlatWriteRam32((r3 + 28), r30);
    r3 = MemoryInline::FlatRead32((r29 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWrite32((r3 + 6228), r30);
    MemoryInline::FlatWrite32((r29 + 28), r30);
    goto loc_80201A44;
}

loc_80201984:
{
    r0 = MemoryInline::FlatRead32((r31 + 5584));
    r0 = (r0 & 2);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8020198C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802019F8;
    }
}

loc_80201990:
{
    r3 = r31;
    ctx->lr = 0x80201998u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F5FD8u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8020199C:
{
    r30 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_802019C4;
    }
}

loc_802019A4:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r3);
    MemoryInline::FlatWrite32((r29 + 28), r3);
    goto loc_802019F8;
}

loc_802019C4:
{
    r3 = r31;
    r4 = r29;
    ctx->lr = 0x802019D0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801F600Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_802019D4:
{
    r30 = r3;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_802019F8;
    }
}

loc_802019DC:
{
    r4 = 0x80360000u;
    r4 = (r4 + -20912);
    MemoryInline::FlatWriteRam32((r4 + 28), r3);
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r4 = MemoryInline::FlatRead32((r4 + 52));
    MemoryInline::FlatWrite32((r4 + 6228), r3);
    MemoryInline::FlatWrite32((r29 + 28), r3);
}

loc_802019F8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_802019FC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201A44;
    }
}

loc_80201A00:
{
    r4 = MemoryInline::FlatRead32((r29 + 8));
    r3 = MemoryInline::FlatRead16((r4 + 648));
    r3 = (r3 + -1);
    r0 = (r3 & 65535);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80201A10:
{
    MemoryInline::FlatWrite16((r4 + 648), static_cast<uint16_t>(r3));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80201A2C;
    }
}

loc_80201A18:
{
    r3 = MemoryInline::FlatRead32(r4);
    r0 = 0;
    r3 = (r3 & -2);
    MemoryInline::FlatWrite32(r4, r3);
    MemoryInline::FlatWrite32((r4 + 28), r0);
}

loc_80201A2C:
{
    r0 = MemoryInline::FlatRead32(r29);
    r0 = (r0 & -2);
    MemoryInline::FlatWrite32(r29, r0);
    r3 = MemoryInline::FlatRead32((r31 + 5576));
    r0 = (r3 + -1);
    MemoryInline::FlatWrite32((r31 + 5576), r0);
}

loc_80201A44:
{
    r0 = 0;
    r3 = r30;
    MemoryInline::FlatWrite32((r31 + 5616), r0);
}

loc_80201A50:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x802016D8 func_802016D8 preserves=true fpr_mask=0x00000000
