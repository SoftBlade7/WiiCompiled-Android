#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018AB04(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8018AC50_loc_0 = 0;
    uint32_t addr_lfsx_8018AC98_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;
    uint32_t r1_psq_tmp_2 = 0;
    uint32_t r1_psq_tmp_3 = 0;
    uint32_t r1_psq_tmp_4 = 0;
    uint32_t r1_psq_tmp_5 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8018AB04;

loc_8018AB04:
{
    r3 = 0x80250000u;
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r3 = (r3 + 11184);
    guest_range_0 = MemoryInline::ResolveRangeHost((r3 + 4), 0, 32u, true, false);
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 4));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8018AB18:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018AB2C;
    }
}

loc_8018AB1C:
{
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8018AB20:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018AB2C;
    }
}

loc_8018AB24:
{
    f1.d = f0.d;
    goto loc_8018ACAC;
}

loc_8018AB2C:
{
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r3 + 4));
    SetCRFloatResident(cr, 0, f2.d, f4.d);
}

loc_8018AB34:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018ABA4;
    }
}

loc_8018AB3C:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8018AB40:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018AB74;
    }
}

loc_8018AB48:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8018AB4C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018AB60;
    }
}

loc_8018AB54:
{
    f3.d = f2.d;
    r0 = 0;
    goto loc_8018AC18;
}

loc_8018AB60:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 16));
    f1.d = f2.d;
    r0 = 1;
    goto loc_8018AC18;
}

loc_8018AB74:
{
    f1.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8018AB7C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018AB90;
    }
}

loc_8018AB84:
{
    f3.d = f2.d;
    r0 = 1;
    goto loc_8018AC18;
}

loc_8018AB90:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 24));
    f1.d = f2.d;
    r0 = 0;
    goto loc_8018AC18;
}

loc_8018ABA4:
{
    SetCRFloatResident(cr, 0, f1.d, f4.d);
}

loc_8018ABA8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018ABE4;
    }
}

loc_8018ABB0:
{
    f0.d = (-(f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8018ABB8:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018ABD0;
    }
}

loc_8018ABC0:
{
    f3.d = f0.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 24u, (r3 + 28));
    r0 = 1;
    goto loc_8018AC18;
}

loc_8018ABD0:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r3 + 16));
    f1.d = f0.d;
    r0 = 0;
    goto loc_8018AC18;
}

loc_8018ABE4:
{
    f0.d = (-(f2.d));
    f1.d = (-(f1.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8018ABF0:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8018AC08;
    }
}

loc_8018ABF8:
{
    f3.d = f0.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 28u, (r3 + 32));
    r0 = 0;
    goto loc_8018AC18;
}

loc_8018AC08:
{
    f3.d = f1.d;
    f4.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 20u, (r3 + 24));
    f1.d = f0.d;
    r0 = 1;
}

loc_8018AC18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8018AC1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018AC68;
    }
}

loc_8018AC20:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_1 = (r1 + 16);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_1, PPC_PsFromScalarInline(f1.d));
    r0 = MemoryInline::FlatRead16((r1 + 16));
    MemoryInline::FlatWriteRam16((r1 + 10), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r1_psq_tmp_2 = (r1 + 10);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 3u>(ctx, r1_psq_tmp_2));
    r4 = 0x80290000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & -8);
    r4 = (r4 + -12120);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f0.d)));
    r3 = (r4 + r0);
    addr_lfsx_8018AC50_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8018AC50_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d - f0.d));
    goto loc_8018ACAC;
}

loc_8018AC68:
{
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d / f3.d));
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 8u, (r3 + 12));
    f1.d = PpcFmulsInline(f1.d, f0.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_3 = (r1 + 12);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_3, PPC_PsFromScalarInline(f1.d));
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r1_psq_tmp_4 = (r1 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 3u>(ctx, r1_psq_tmp_4));
    r4 = 0x80290000u;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_2 & -8);
    r4 = (r4 + -12120);
    f2.d = static_cast<double>(PpcForceSingleValueInline(f1.d - PPC_PsToScalarInline(f0.d)));
    r3 = (r4 + r0);
    addr_lfsx_8018AC98_loc_0 = (r4 + r0);
    f0.d = MemoryInline::FlatReadFloat32(addr_lfsx_8018AC98_loc_0);
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = PpcFmulsInline(f2.d, f1.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f4.d + f0.d));
}

loc_8018ACAC:
{
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000001B gpr_write=0x0000001B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8018AB04 func_8018AB04 preserves=true fpr_mask=0x00000000
