#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80227E18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint8_t* guest_range_0 = nullptr;
    uint8_t* guest_range_1 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f7 = ctx->fpr[7];
    PPC_FPR f8 = ctx->fpr[8];
    PPC_FPR f9 = ctx->fpr[9];
    PPC_FPR f10 = ctx->fpr[10];
    PPC_FPR f11 = ctx->fpr[11];
    PPC_FPR f12 = ctx->fpr[12];
    PPC_FPR f13 = ctx->fpr[13];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80227E18;

loc_80227E18:
{
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -80), r1);
    r1 = (r1 + -80);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    f29.d = MemoryInline::FlatReadFloat32((r5 + 8));
    r7 = 1;
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 48u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 24));
    f1.d = (-(f29.d));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80227E48:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80227E54;
    }
}

loc_80227E4C:
{
    f29.d = (-(f0.d));
    r7 = 0;
}

loc_80227E54:
{
    r0 = MemoryInline::ReadResolved32(guest_range_0, 0u, r3);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 24u);
        if (resolved_pair.valid) {
            f0.d = PpcBitCastToFloatInline(resolved_pair.second);
            f31.d = PpcBitCastToFloatInline(resolved_pair.first);
        } else {
            f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 28));
            f31.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 24));
        }
    }
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80227E64:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f31.d));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227E78;
    }
}

loc_80227E6C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80227E70:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80227F9C;
    }
}

loc_80227E74:
{
    goto loc_80227FD0;
}

loc_80227E78:
{
    f9.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    r6 = (r13 + -23976);
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
    f8.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f29.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -25224));
    f13.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 36u, (r3 + 36));
    f12.d = MemoryInline::FlatReadFloat32((r6 + 4));
    f11.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 32u, (r3 + 32));
    f10.d = MemoryInline::FlatReadFloat32((r13 + -23976));
    f30.d = static_cast<double>(PpcForceSingleValueInline(f9.d / f4.d));
    f5.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 20));
    f3.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = MemoryInline::FlatReadFloat32((r5 + 8));
    f6.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f7.d = MemoryInline::FlatReadFloat32((r2 + -25240));
    f12.d = static_cast<double>(PpcForceSingleValueInline(f13.d + f12.d));
    f4.d = PpcFmulsInline(f0.d, f4.d);
    f10.d = static_cast<double>(PpcForceSingleValueInline(f11.d + f10.d));
    f9.d = PpcFmulsInline(f0.d, f9.d);
    f3.d = PpcFmulsInline(f3.d, f5.d);
    f11.d = static_cast<double>(PpcForceSingleValueInline(f12.d / f4.d));
    f9.d = static_cast<double>(PpcForceSingleValueInline(f10.d / f9.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f30.d));
    f3.d = PpcFmulsInline(f29.d, f9.d);
    f9.d = static_cast<double>(PpcForceSingleValueInline(f31.d / f1.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f3.d));
    f10.d = (-(f2.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 8), f3.d);
    f2.d = PpcFmulsInline(f6.d, f5.d);
    f1.d = PpcFmulsInline(f29.d, f11.d);
    f3.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f10.d));
    guest_range_1 = MemoryInline::ResolveRangeHost(r4, 0, 12u, false, true);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f3.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f4.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f8.d));
    MemoryInline::FlatWriteRamFloat32((r1 + 12), f2.d);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f10.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r4 + 4), f2.d);
    f1.d = PpcFmulsInline(f9.d, f4.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f7.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 8u, (r4 + 8), f1.d);
    r0 = MemoryInline::ReadResolved32(guest_range_0, 4u, (r3 + 4));
    MemoryInline::FlatWriteRamFloat32((r1 + 16), f1.d);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80227F24:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80227F70;
    }
}

loc_80227F28:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f3.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f3.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f2.d = PpcFmulsInline(f2.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r4 + 4), f2.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f3.d + f1.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = (-(f0.d));
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r4 + 4), f0.d);
    goto loc_80227FD0;
}

loc_80227F70:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80227F74:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80227FD0;
    }
}

loc_80227F78:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 8));
    f1.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f3.d, f1.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 0u, r4, f1.d);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 12));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    MemoryInline::WriteResolvedFloat32(guest_range_1, 4u, (r4 + 4), f0.d);
    goto loc_80227FD0;
}

loc_80227F9C:
{
    f4.d = MemoryInline::FlatReadFloat32(r5);
    f2.d = (-(f29.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 40u, (r3 + 40));
    f3.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = PpcFmulsInline(f4.d, f0.d);
    MemoryInline::FlatWriteFloat32(r4, f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 44u, (r3 + 44));
    f0.d = PpcFmulsInline(f3.d, f0.d);
    MemoryInline::FlatWriteFloat32((r4 + 4), f0.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 24));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r4 + 8), f0.d);
}

loc_80227FD0:
{
    r3 = r7;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    r1 = (r1 + 80);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[7] = f7;
    ctx->fpr[8] = f8;
    ctx->fpr[9] = f9;
    ctx->fpr[10] = f10;
    ctx->fpr[11] = f11;
    ctx->fpr[12] = f12;
    ctx->fpr[13] = f13;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000020FF gpr_write=0x000000CB gpr_return=0x00000008 fpr_read=0xE0003FFF fpr_write=0xE0003FFF fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80227E18 func_80227E18 preserves=true fpr_mask=0x00000000
