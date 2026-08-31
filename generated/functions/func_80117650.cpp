#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80117650(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80117650;

loc_80117650:
{
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8011765C:
{
    MemoryInline::FlatWriteRam32((r1 + 52), r0);
    MemoryInline::FlatWriteRam32((r1 + 44), r31);
    MemoryInline::FlatWriteRam32((r1 + 40), r30);
    r30 = r5;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117674;
    }
}

loc_80117670:
{
    r3 = MemoryInline::FlatRead32((r13 + -26696));
}

loc_80117674:
{
    MemoryInline::FlatWriteRam32((r1 + 8), r4);
    r4 = (r1 + 8);
    r3 = MemoryInline::FlatRead32(r3);
    ctx->lr = 0x80117684u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F00DCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117688:
{
    r31 = r3;
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117698;
    }
}

loc_80117690:
{
    r3 = 0;
    goto loc_8011789C;
}

loc_80117698:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801176A0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011778C;
    }
}

loc_801176A4:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801176B0;
    }
}

loc_801176A8:
{
    r5 = 0;
    goto loc_801176C4;
}

loc_801176B0:
{
}

loc_801176B4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801176C0;
    }
}

loc_801176B8:
{
    r5 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_801176C4;
}

loc_801176C0:
{
    r5 = (r3 + 16);
}

loc_801176C4:
{
    r4 = MemoryInline::FlatRead32(r30);
    r30 = (r13 + -26712);
    r0 = MemoryInline::FlatRead32(r5);
    r0 = (r4 * r0);
    MemoryInline::FlatWrite32((r13 + -26712), r0);
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801176E0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_801176EC;
    }
}

loc_801176E4:
{
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_80117760;
}

loc_801176EC:
{
}

loc_801176F0:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_80117700;
    }
}

loc_801176F4:
{
    f0.d = MemoryInline::FlatReadFloat64(r30);
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    goto loc_80117760;
}

loc_80117700:
{
}

loc_80117704:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_80117760;
    }
}

loc_80117708:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117710:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80117718;
    }
}

loc_80117714:
{
    ctx->lr = 0x80117718u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80117718:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8011771C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117728;
    }
}

loc_80117720:
{
    r5 = 0;
    goto loc_8011775C;
}

loc_80117728:
{
    r3 = r30;
    ctx->lr = 0x80117730u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 47;
    r5 = r3;
    goto loc_80117750;
}

loc_8011773C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80117744:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_8011774C;
    }
}

loc_80117748:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_8011774C:
{
    r3 = (r3 + 1);
}

loc_80117750:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011773C;
    }
}

loc_8011775C:
{
    MemoryInline::FlatWrite32((r31 + 16), r5);
}

loc_80117760:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80117764:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117770;
    }
}

loc_80117768:
{
    r3 = 0;
    goto loc_8011789C;
}

loc_80117770:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117778:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117784;
    }
}

loc_8011777C:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    goto loc_8011789C;
}

loc_80117784:
{
    r3 = (r31 + 16);
    goto loc_8011789C;
}

loc_8011778C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80117790:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8011787C;
    }
}

loc_80117794:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_801177A0;
    }
}

loc_80117798:
{
    r4 = 0;
    goto loc_801177B4;
}

loc_801177A0:
{
}

loc_801177A4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_801177B0;
    }
}

loc_801177A8:
{
    r4 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_801177B4;
}

loc_801177B0:
{
    r4 = (r3 + 16);
}

loc_801177B4:
{
    f1.d = MemoryInline::FlatReadFloat64(r30);
    r30 = (r13 + -26704);
    f0.d = MemoryInline::FlatReadFloat64(r4);
    f0.d = (f1.d * f0.d);
    MemoryInline::FlatWriteFloat64((r13 + -26704), f0.d);
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_801177D0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801177E0;
    }
}

loc_801177D4:
{
    r0 = MemoryInline::FlatRead32(r30);
    MemoryInline::FlatWrite32((r3 + 16), r0);
    goto loc_80117850;
}

loc_801177E0:
{
}

loc_801177E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(1))) {
        goto loc_801177F0;
    }
}

loc_801177E8:
{
    MemoryInline::FlatWriteFloat64((r3 + 16), f0.d);
    goto loc_80117850;
}

loc_801177F0:
{
}

loc_801177F4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(2))) {
        goto loc_80117850;
    }
}

loc_801177F8:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80117800:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80117808;
    }
}

loc_80117804:
{
    ctx->lr = 0x80117808u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F3884u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
}

loc_80117808:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_8011780C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117818;
    }
}

loc_80117810:
{
    r5 = 0;
    goto loc_8011784C;
}

loc_80117818:
{
    r3 = r30;
    ctx->lr = 0x80117820u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x800F23F4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r13 = ctx->gpr[13];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = 47;
    r5 = r3;
    goto loc_80117840;
}

loc_8011782C:
{
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
}

loc_80117834:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(92))) {
        goto loc_8011783C;
    }
}

loc_80117838:
{
    MemoryInline::FlatWrite8(r3, static_cast<uint8_t>(r4));
}

loc_8011783C:
{
    r3 = (r3 + 1);
}

loc_80117840:
{
    r6 = MemoryInline::FlatRead8(r3);
    r0 = (static_cast<int32_t>(static_cast<int8_t>(r6)));
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8011782C;
    }
}

loc_8011784C:
{
    MemoryInline::FlatWrite32((r31 + 16), r5);
}

loc_80117850:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r31), static_cast<int32_t>(0));
}

loc_80117854:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117860;
    }
}

loc_80117858:
{
    r3 = 0;
    goto loc_8011789C;
}

loc_80117860:
{
    r0 = MemoryInline::FlatRead32((r31 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_80117868:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117874;
    }
}

loc_8011786C:
{
    r3 = MemoryInline::FlatRead32((r31 + 16));
    goto loc_8011789C;
}

loc_80117874:
{
    r3 = (r31 + 16);
    goto loc_8011789C;
}

loc_8011787C:
{
    if (((cr & 0x02000000u) == 0)) {
        goto loc_80117888;
    }
}

loc_80117880:
{
    r3 = 0;
    goto loc_8011789C;
}

loc_80117888:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8011788C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80117898;
    }
}

loc_80117890:
{
    r3 = MemoryInline::FlatRead32((r3 + 16));
    goto loc_8011789C;
}

loc_80117898:
{
    r3 = (r3 + 16);
}

loc_8011789C:
{
    r0 = MemoryInline::FlatRead32((r1 + 52));
    r31 = MemoryInline::FlatRead32((r1 + 44));
    r30 = MemoryInline::FlatRead32((r1 + 40));
    ctx->lr = r0;
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80117650 func_80117650 preserves=true fpr_mask=0x00000000
