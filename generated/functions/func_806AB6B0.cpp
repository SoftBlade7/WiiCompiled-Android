#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806AB6B0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r0_rot_7 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806AB6B0;

loc_806AB6B0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_806AB6BC:
{
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806AB88C;
    }
}

loc_806AB6CC:
{
    r0 = MemoryInline::FlatRead8((r3 + 332));
}

loc_806AB6D4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806AB6F0;
    }
}

loc_806AB6D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 333));
}

loc_806AB6E0:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_806AB6F0;
    }
}

loc_806AB6E4:
{
    r0 = MemoryInline::FlatRead8((r3 + 334));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB6EC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AB88C;
    }
}

loc_806AB6F0:
{
    r0 = MemoryInline::FlatRead8((r3 + 299));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB6F8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AB700;
    }
}

loc_806AB6FC:
{
    goto loc_806AB88C;
}

loc_806AB700:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 121));
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB710:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r4 = (r4_rot_1 & 7);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806AB88C;
    }
}

loc_806AB71C:
{
    r0 = MemoryInline::FlatRead8((r3 + 122));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB724:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806AB88C;
    }
}

loc_806AB728:
{
    r0 = MemoryInline::FlatRead32((r3 + 100));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_806AB730:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AB738;
    }
}

loc_806AB734:
{
    goto loc_806AB88C;
}

loc_806AB738:
{
}

loc_806AB73C:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_806AB74C;
    }
}

loc_806AB740:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 121), static_cast<uint8_t>(r0));
    goto loc_806AB774;
}

loc_806AB74C:
{
}

loc_806AB750:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(2))) {
        goto loc_806AB760;
    }
}

loc_806AB754:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 122), static_cast<uint8_t>(r0));
    goto loc_806AB774;
}

loc_806AB760:
{
}

loc_806AB764:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_806AB774;
    }
}

loc_806AB768:
{
    r0 = 1;
    MemoryInline::FlatWrite8((r3 + 121), static_cast<uint8_t>(r0));
    MemoryInline::FlatWrite8((r3 + 123), static_cast<uint8_t>(r0));
}

loc_806AB774:
{
    r0 = MemoryInline::FlatRead8((r3 + 4));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB77C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806AB88C;
    }
}

loc_806AB780:
{
}

loc_806AB784:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(1))) {
        goto loc_806AB7C4;
    }
}

loc_806AB788:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 332));
    r3 = MemoryInline::FlatRead32((r4 + 15324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB798:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_1 & 7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AB88C;
    }
}

loc_806AB7A4:
{
    r3 = 0x809C0000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_2 & -4);
    r4 = MemoryInline::FlatRead32((r3 + 8656));
    r3 = r31;
    r4 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28));
    ctx->lr = 0x806AB7C0u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806ABB5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806AB88C;
}

loc_806AB7C4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(2));
}

loc_806AB7C8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806AB7E8;
    }
}

loc_806AB7CC:
{
    r4 = 0x809C0000u;
    r3 = r31;
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r4_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_2 & 7);
    ctx->lr = 0x806AB7E4u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806ABD3Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806AB88C;
}

loc_806AB7E8:
{
}

loc_806AB7EC:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(3))) {
        goto loc_806AB82C;
    }
}

loc_806AB7F0:
{
    r4 = 0x809C0000u;
    r0 = MemoryInline::FlatRead8((r3 + 332));
    r3 = MemoryInline::FlatRead32((r4 + 15324));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB800:
{
    r0 = MemoryInline::FlatRead16((r3 + 4));
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r0 = (r0_rot_3 & 7);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AB88C;
    }
}

loc_806AB80C:
{
    r3 = 0x809C0000u;
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & -4);
    r4 = MemoryInline::FlatRead32((r3 + 8656));
    r3 = r31;
    r4 = (r4 + r0);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 28));
    ctx->lr = 0x806AB828u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    InvokeDirectCpu<0x806ABB5Cu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    cr = ctx->cr;
    xer = ctx->xer;
    goto loc_806AB88C;
}

loc_806AB82C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(5));
}

loc_806AB830:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806AB88C;
    }
}

loc_806AB834:
{
    r3 = MemoryInline::FlatRead32((r3 + 552));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806AB83C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806AB88C;
    }
}

loc_806AB840:
{
    r3 = (r3 + 116);
    // inline leaf 0x800375F0 (16 guest instruction(s))
}

loc_inl0_0x800375F0:
{
    r4 = MemoryInline::FlatRead32((r3 + 4));
}

loc_inl0_0x800375F8:
{
    if ((static_cast<int32_t>(r4) != static_cast<int32_t>(0))) {
        goto loc_inl0_0x80037604;
    }
}

loc_inl0_0x800375FC:
{
    r0 = 0;
    goto loc_inl0_0x80037618;
}

loc_inl0_0x80037604:
{
    r3 = MemoryInline::FlatRead32(r3);
    r0 = MemoryInline::FlatRead32((r4 + 8));
    r0 = (r0 - r3);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_rot_5 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(27));
    r0 = (r0_rot_5 & 134217727);
}

loc_inl0_0x80037618:
{
}

loc_inl0_0x8003761C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_inl0_0x80037628;
    }
}

loc_inl0_0x80037620:
{
    r3 = r4;
    goto loc_inl0_cont_800375F0;
}

loc_inl0_0x80037628:
{
    r3 = 0;
}

loc_inl0_cont_800375F0:
{
    // end of inlined leaf 0x800375F0
}

loc_806AB84C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(0))) {
        goto loc_806AB858;
    }
}

loc_806AB850:
{
    r3 = 0;
    goto loc_806AB85C;
}

loc_806AB858:
{
    r3 = MemoryInline::FlatRead32((r3 + 12));
}

loc_806AB85C:
{
}

loc_806AB860:
{
    r0 = 0;
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(1))) {
        goto loc_806AB870;
    }
}

loc_806AB868:
{
}

loc_806AB86C:
{
    if ((static_cast<int32_t>(r3) != static_cast<int32_t>(2))) {
        goto loc_806AB874;
    }
}

loc_806AB870:
{
    r0 = 1;
}

loc_806AB874:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806AB878:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_806AB88C;
    }
}

loc_806AB87C:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 1748));
    r0 = 0;
    MemoryInline::FlatWrite32((r31 + 100), r0);
    MemoryInline::FlatWriteFloat32((r31 + 112), f0.d);
}

loc_806AB88C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806AB6B0 func_806AB6B0 preserves=true fpr_mask=0x00000000
