#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A463C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_805A463C;

loc_805A463C:
{
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = 0x80890000u;
    r31 = (r31 + 8728);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = 0;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 436u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r5;
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 296u, (r31 + 296));
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r4;
    r3 = MemoryInline::FlatRead32(r5);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r4 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r4 & 1);
}

loc_805A4694:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A4750;
    }
}

loc_805A4698:
{
    r0 = (r4 & 16);
}

loc_805A469C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A4750;
    }
}

loc_805A46A0:
{
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r0 = (r0 & 32768);
}

loc_805A46A8:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A46D4;
    }
}

loc_805A46AC:
{
    r0 = (r4 & 1024);
}

loc_805A46B0:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A4750;
    }
}

loc_805A46B4:
{
    r0 = (r4 & 4);
}

loc_805A46B8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_805A4750;
    }
}

loc_805A46BC:
{
    r3 = r29;
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 408u, (r31 + 408));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A46D0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A4750;
    }
}

loc_805A46D4:
{
    r3 = MemoryInline::FlatRead32(r29);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 134217728);
}

loc_805A46E4:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_805A470C;
    }
}

loc_805A46E8:
{
    f2.d = MemoryInline::FlatReadFloat32((r28 + 24));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 244u, (r31 + 244));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 428u, (r31 + 428));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f1.d));
    MemoryInline::FlatWriteFloat32((r28 + 24), f1.d);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_805A4700:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A4708;
    }
}

loc_805A4704:
{
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
}

loc_805A4708:
{
    r30 = 1;
}

loc_805A470C:
{
    r3 = r29;
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805A4720:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A4750;
    }
}

loc_805A4724:
{
    r3 = r29;
    // inline leaf 0x80590D08 (6 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 8));
    r3 = MemoryInline::FlatRead32((r3 + 144));
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r3 = (r3 + 212);
    // end of inlined leaf 0x80590D08
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 432u, (r31 + 432));
    f2.d = (-(f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 400u, (r31 + 400));
    f31.d = PpcFmulsInline(f1.d, f2.d);
    SetCRFloatResident(cr, 0, f0.d, f31.d);
}

loc_805A4744:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A474C;
    }
}

loc_805A4748:
{
    f31.d = f0.d;
}

loc_805A474C:
{
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 288u, (r31 + 288));
}

loc_805A4750:
{
    f1.d = MemoryInline::FlatReadFloat32((r28 + 96));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_805A4758:
{
    f0.d = static_cast<double>(PpcForceSingleValueInline(f31.d - f1.d));
    f0.d = PpcFmulsInline(f30.d, f0.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r28 + 96), f0.d);
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805A4774;
    }
}

loc_805A476C:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    MemoryInline::FlatWriteFloat32((r28 + 24), f0.d);
}

loc_805A4774:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF000003B gpr_write=0xF000001B gpr_return=0x00000018 fpr_read=0xC0000007 fpr_write=0xC0000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A463C func_805A463C preserves=true fpr_mask=0x00000000
