#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_800867C0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    double leaf_stack_saved_f29_entry = 0.0;
    double leaf_stack_saved_f30_entry = 0.0;
    double leaf_stack_saved_f31_entry = 0.0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    PPC_FPR f5 = ctx->fpr[5];
    PPC_FPR f6 = ctx->fpr[6];
    PPC_FPR f29 = ctx->fpr[29];
    PPC_FPR f30 = ctx->fpr[30];
    PPC_FPR f31 = ctx->fpr[31];
    uint32_t cr = ctx->cr;

    goto loc_800867C0;

loc_800867C0:
{
    leaf_stack_saved_f29_entry = f29.d;
    leaf_stack_saved_f30_entry = f30.d;
    leaf_stack_saved_f31_entry = f31.d;
    MemoryInline::FlatWriteRam32((r1 + -64), r1);
    r1 = (r1 + -64);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 68), r0);
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    // psq_store w=0 quant=0 (using PPC_PsqSt)
    guest_range_0 = MemoryInline::ResolveRangeHost((r2 + -28972), 0, 116u, true, false);
    f6.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 92u, (r2 + -28880));
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    SetCRFloatResident(cr, 0, f6.d, f2.d);
}

loc_800867F4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8008688C;
    }
}

loc_800867F8:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 112u, (r2 + -28860));
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 104u, (r2 + -28868));
    f5.d = PpcFmulsInline(f0.d, f1.d);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r2 + -28872));
    f31.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f5.d));
    f1.d = PpcFmulsInline(f1.d, f31.d);
    f1.d = PpcFmulsInline(f31.d, f1.d);
    f30.d = static_cast<double>(PpcForceSingleValueInline(f3.d / f1.d));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f30.d));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_80086820:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80086864;
    }
}

loc_80086824:
{
    SetCRFloatResident(cr, 0, f29.d, f6.d);
}

loc_80086828:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80086834;
    }
}

loc_80086830:
{
    goto loc_80086840;
}

loc_80086834:
{
    f1.d = f29.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f6.d = PpcFmulsInline(f29.d, f1.d);
}

loc_80086840:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 108u, (r2 + -28864));
    f0.d = PpcFmulsInline(f31.d, f30.d);
    r3 = 2;
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f6.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d / f1.d));
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    f0.d = PpcFmulsInline(f31.d, f1.d);
    MemoryInline::FlatWriteFloat32(r31, f0.d);
    goto loc_800868F0;
}

loc_80086864:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r2 + -28876));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_8008686C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80086884;
    }
}

loc_80086874:
{
    f0.d = (-(f31.d));
    MemoryInline::FlatWriteFloat32(r3, f0.d);
    r3 = 1;
    goto loc_800868F0;
}

loc_80086884:
{
    r3 = 0;
    goto loc_800868F0;
}

loc_8008688C:
{
    f2.d = (-(f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 100u, (r2 + -28872));
    f29.d = static_cast<double>(PpcForceSingleValueInline(f2.d / f1.d));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_8008689C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_800868D0;
    }
}

loc_800868A0:
{
    SetCRFloatResident(cr, 0, f29.d, f6.d);
}

loc_800868A4:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800868B0;
    }
}

loc_800868AC:
{
    goto loc_800868BC;
}

loc_800868B0:
{
    f1.d = f29.d;
    // inline leaf 0x80085040 (9 guest instruction(s))
    f0.d = PPC_Frsqrte(f1.d);
    {
        const auto resolved_pair = MemoryInline::ReadResolvedPair32(guest_range_0, 0u);
        if (resolved_pair.valid) {
            f2.d = PpcBitCastToFloatInline(resolved_pair.first);
            f3.d = PpcBitCastToFloatInline(resolved_pair.second);
        } else {
            f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r2 + -28972));
            f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r2 + -28968));
        }
    }
    f4.d = PpcFmulsInline(f0.d, f0.d);
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f4.d = PPC_Fnmsubs(f4.d, f1.d, f3.d);
    f0.d = PpcFmulsInline(f4.d, f0.d);
    f1.d = f0.d;
    // end of inlined leaf 0x80085040
    f6.d = PpcFmulsInline(f29.d, f1.d);
}

loc_800868BC:
{
    f0.d = (-(f6.d));
    MemoryInline::FlatWriteFloat32(r31, f6.d);
    r3 = 2;
    MemoryInline::FlatWriteFloat32((r31 + 4), f0.d);
    goto loc_800868F0;
}

loc_800868D0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 96u, (r2 + -28876));
    SetCRFloatResident(cr, 0, f29.d, f0.d);
}

loc_800868D8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_800868EC;
    }
}

loc_800868E0:
{
    MemoryInline::FlatWriteFloat32(r3, f6.d);
    r3 = 1;
    goto loc_800868F0;
}

loc_800868EC:
{
    r3 = 0;
}

loc_800868F0:
{
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f31.d = leaf_stack_saved_f31_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f30.d = leaf_stack_saved_f30_entry;
    // psq_load w=0 quant=0 (using PPC_PsqL)
    f29.d = leaf_stack_saved_f29_entry;
    r0 = MemoryInline::FlatRead32((r1 + 68));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 64);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->fpr[5] = f5;
    ctx->fpr[6] = f6;
    ctx->fpr[29] = f29;
    ctx->fpr[30] = f30;
    ctx->fpr[31] = f31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000000E gpr_write=0x8000000B gpr_return=0x00000008 fpr_read=0xE000007F fpr_write=0xE000007F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x800867C0 func_800867C0 preserves=true fpr_mask=0x00000000
