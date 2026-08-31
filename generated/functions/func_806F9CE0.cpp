#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806F9CE0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r12 = ctx->gpr[12];
    uint32_t r27 = ctx->gpr[27];
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_806F9CE0;

loc_806F9CE0:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r1 + -64), 0, 72u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, (r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::WriteResolved32(guest_range_0, 68u, (r1 + 68), r0);
    MemoryInline::WriteResolvedFloat64(guest_range_0, 48u, (r1 + 48), f31.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 56);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f31.d));
    MemoryInline::WriteResolvedFloat64(guest_range_0, 32u, (r1 + 32), f30.d);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 40);
    PPC_PsqStStackInline<0u, 0u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f30.d));
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 12u, ((static_cast<uint64_t>(static_cast<uint32_t>(r27)) << 32) | static_cast<uint32_t>(r28)))) {
        MemoryInline::WriteResolved32(guest_range_0, 12u, (r11 + -20), r27);
        MemoryInline::WriteResolved32(guest_range_0, 16u, (r11 + -16), r28);
    }
    if (!MemoryInline::WriteResolvedPair32(guest_range_0, 20u, ((static_cast<uint64_t>(static_cast<uint32_t>(r29)) << 32) | static_cast<uint32_t>(r30)))) {
        MemoryInline::WriteResolved32(guest_range_0, 20u, (r11 + -12), r29);
        MemoryInline::WriteResolved32(guest_range_0, 24u, (r11 + -8), r30);
    }
    MemoryInline::WriteResolved32(guest_range_0, 28u, (r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r0 = MemoryInline::FlatRead32((r3 + 184));
    r31 = 0x808A0000u;
    r27 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_806F9D14:
{
    r31 = (r31 + 3792);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F9DEC;
    }
}

loc_806F9D1C:
{
    f31.d = MemoryInline::FlatReadFloat32((r31 + 520));
    r29 = r27;
    r30 = (r3 + 16);
    r28 = 0;
    f30.d = f31.d;
}

loc_806F9D30:
{
    r12 = MemoryInline::FlatRead32((r30 + 8));
    r3 = r30;
    r12 = MemoryInline::FlatRead32((r12 + 12));
    ctr = r12;
    ctx->lr = 0x806F9D44u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
    ctx->ctr = ctr;
    InvokeIndirectCpu(ctr, ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r11 = ctx->gpr[11];
    r12 = ctx->gpr[12];
    r27 = ctx->gpr[27];
    r28 = ctx->gpr[28];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    f30 = ctx->fpr[30];
    f31 = ctx->fpr[31];
    cr = ctx->cr;
    ctr = ctx->ctr;
    xer = ctx->xer;
}

loc_806F9D48:
{
    if ((static_cast<int32_t>(r28) != static_cast<int32_t>(2))) {
        goto loc_806F9D68;
    }
}

loc_806F9D4C:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 524));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 528));
    // inline leaf 0x80717D08 (9 guest instruction(s))
}

loc_inl1_0x80717D08:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_inl1_0x80717D10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl1_0x80717D1C;
    }
}

loc_inl1_0x80717D14:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    goto loc_inl1_cont_80717D08;
}

loc_inl1_0x80717D1C:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl1_0x80717D20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl1_return;
    }
}

loc_inl1_0x80717D24:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    goto loc_inl1_cont_80717D08;
}

loc_inl1_return:
{
}

loc_inl1_cont_80717D08:
{
    // end of inlined leaf 0x80717D08
    f0.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f30.d = PpcFmulsInline(f30.d, f0.d);
    goto loc_806F9D80;
}

loc_806F9D68:
{
    f1.d = MemoryInline::FlatReadFloat32((r31 + 524));
    r3 = r30;
    f2.d = MemoryInline::FlatReadFloat32((r31 + 520));
    // inline leaf 0x80717D08 (9 guest instruction(s))
}

loc_inl2_0x80717D08:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_inl2_0x80717D10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_inl2_0x80717D1C;
    }
}

loc_inl2_0x80717D14:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f2.d);
    goto loc_inl2_cont_80717D08;
}

loc_inl2_0x80717D1C:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_inl2_0x80717D20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_inl2_return;
    }
}

loc_inl2_0x80717D24:
{
    MemoryInline::FlatWriteFloat32((r3 + 20), f1.d);
    goto loc_inl2_cont_80717D08;
}

loc_inl2_return:
{
}

loc_inl2_cont_80717D08:
{
    // end of inlined leaf 0x80717D08
    f0.d = MemoryInline::FlatReadFloat32((r29 + 36));
    f31.d = PpcFmulsInline(f31.d, f0.d);
}

loc_806F9D80:
{
    r28 = (r28 + 1);
    r29 = (r29 + 28);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(6));
}

loc_806F9D8C:
{
    r30 = (r30 + 28);
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806F9D30;
    }
}

loc_806F9D94:
{
    f1.d = MemoryInline::FlatReadFloat32((r27 + 192));
    f0.d = MemoryInline::FlatReadFloat64((r31 + 544));
    r3 = MemoryInline::FlatRead32((r27 + 184));
    f1.d = (f0.d * f1.d);
    f0.d = MemoryInline::FlatReadFloat64((r31 + 536));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F9DB0:
{
    f0.d = (f0.d - f1.d);
    f31.d = (f31.d * f0.d);
    f31.d = static_cast<double>(PpcForceSingleValueInline(f31.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F9DCC;
    }
}

loc_806F9DC0:
{
    f1.d = f31.d;
    r4 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x8008F560u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_806F9DCC:
{
    r3 = MemoryInline::FlatRead32((r27 + 184));
    r3 = MemoryInline::FlatRead32(r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_806F9DD8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806F9DE4;
    }
}

loc_806F9DDC:
{
    f1.d = f30.d;
    // inline leaf 0x8008F610 (2 guest instruction(s))
    MemoryInline::FlatWriteFloat32((r3 + 176), f1.d);
    // end of inlined leaf 0x8008F610
}

loc_806F9DE4:
{
    f0.d = MemoryInline::FlatReadFloat32((r31 + 524));
    MemoryInline::FlatWriteFloat32((r27 + 192), f0.d);
}

loc_806F9DEC:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    guest_range_1 = MemoryInline::ResolveRangeHost((r1 + 12), 0, 60u, true, false);
    f31.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 36u, (r1 + 48));
    // psq_load w=0 quant=0 (using PPC_PsqL)
    r11 = (r1 + 32);
    f30.d = MemoryInline::ReadResolvedFloat64(guest_range_1, 20u, (r1 + 32));
    // inline leaf 0x800215EC (6 guest instruction(s))
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 0u);
        if (resolved_pair.valid) {
            r27 = resolved_pair.first;
            r28 = resolved_pair.second;
        } else {
            r27 = MemoryInline::ReadResolved32(guest_range_1, 0u, (r11 + -20));
            r28 = MemoryInline::ReadResolved32(guest_range_1, 4u, (r11 + -16));
        }
    }
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_1, 8u);
        if (resolved_pair.valid) {
            r29 = resolved_pair.first;
            r30 = resolved_pair.second;
        } else {
            r29 = MemoryInline::ReadResolved32(guest_range_1, 8u, (r11 + -12));
            r30 = MemoryInline::ReadResolved32(guest_range_1, 12u, (r11 + -8));
        }
    }
    r31 = MemoryInline::ReadResolved32(guest_range_1, 16u, (r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::ReadResolved32(guest_range_1, 56u, (r1 + 68));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[11] = r11;
    ctx->gpr[12] = r12;
    ctx->gpr[27] = r27;
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
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x806F9CE0 func_806F9CE0 preserves=false fpr_mask=0xC0000000
