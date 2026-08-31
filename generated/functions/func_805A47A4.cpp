#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805A47A4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;
    uint8_t* guest_range_2 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f28 = ctx->fpr[28];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_805A47A4;

loc_805A47A4:
{
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + -144), 0, 152u, false, true);
    MemoryInline::WriteResolved32(guest_range_1, 0u, (r1 + -144), r1);
    r1 = (r1 + -144);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_1, 148u, (r1 + 148), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_1, 128u, (r1 + 128), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 136);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 112u, (r1 + 112), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 120);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 96u, (r1 + 96), f29.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_2 = (r1 + 104);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_2, PPC_PsFromScalarInline(f29.d));
    MemoryInline::WriteResolvedFloat64(guest_range_1, 80u, (r1 + 80), f28.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 88);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f28.d));
    r11 = (r1 + 80);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 60u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_1, 60u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_1, 64u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_1, 68u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_1, 68u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_1, 72u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_1, 76u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = 0x80890000u;
    r29 = r5;
    r31 = (r31 + 8728);
    r27 = r3;
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 444u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 248u, (r31 + 248));
    r28 = r4;
    f30.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    r30 = r6;
    r3 = r29;
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f2.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 416u, (r31 + 416));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 436u, (r31 + 436));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = f30.d;
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_805A481C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A4828;
    }
}

loc_805A4820:
{
    f29.d = f0.d;
    goto loc_805A4838;
}

loc_805A4828:
{
    f0.d = f31.d;
    SetCRFloatResident(cr, 0, f0.d, f29.d);
}

loc_805A4830:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A4838;
    }
}

loc_805A4834:
{
    f29.d = f0.d;
}

loc_805A4838:
{
    r3 = r29;
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f2.d = MemoryInline::FlatReadFloat32((r3 + 28));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 408u, (r31 + 408));
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 440u, (r31 + 440));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, r31);
    f28.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_805A485C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805A4868;
    }
}

loc_805A4860:
{
    f28.d = f0.d;
    goto loc_805A4878;
}

loc_805A4868:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 248u, (r31 + 248));
    SetCRFloatResident(cr, 0, f0.d, f28.d);
}

loc_805A4870:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A4878;
    }
}

loc_805A4874:
{
    f28.d = f0.d;
}

loc_805A4878:
{
    r3 = r29;
    // inline leaf 0x8059077C (3 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    // end of inlined leaf 0x8059077C
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

loc_805A4890:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_805A4898;
    }
}

loc_805A4894:
{
    f30.d = PpcFmulsInline(f29.d, f28.d);
}

loc_805A4898:
{
    f2.d = MemoryInline::FlatReadFloat32((r27 + 280));
    r3 = r29;
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 412u, (r31 + 412));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f30.d - f2.d));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    MemoryInline::FlatWriteFloat32((r27 + 280), f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d + f0.d));
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f30.d = MemoryInline::FlatReadFloat32((r3 + 20));
    r3 = r29;
    // inline leaf 0x80591904 (4 guest instruction(s))
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 40));
    r3 = MemoryInline::FlatRead32((r3 + 604));
    // end of inlined leaf 0x80591904
    f1.d = PpcFmulsInline(f31.d, f30.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 360u, (r31 + 360));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 68));
    r4 = r30;
    r3 = (r1 + 8);
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f2.d, f0.d);
    ctx->lr = 0x805A48E8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    InvokeDirectCpu<0x802303BCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    r4 = r28;
    r5 = r28;
    r3 = (r1 + 8);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    InvokeDirectCpu<0x8019A91Cu>(ctx);
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_2 = MemoryInline::ResolveRangeHost((r1 + 60), 0, 92u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 68u, (r1 + 128));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 52u, (r1 + 112));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 36u, (r1 + 96));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 80);
    f28.d = MemoryInline::ReadResolvedFloat64(guest_range_2, 20u, (r1 + 80));
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_2, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_2, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_2, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_2, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_2, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_2, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_2, 88u, (r1 + 148));
    ctx->lr = r0;
    r1 = (r1 + 144);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[28] = f28;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800007E gpr_write=0xF800083B gpr_return=0x00000018 fpr_read=0xF0000019 fpr_write=0xF0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805A47A4 func_805A47A4 preserves=false fpr_mask=0xF0000000
