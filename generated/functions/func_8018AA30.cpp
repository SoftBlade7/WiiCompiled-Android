#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8018AA30(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t addr_lfsx_8018AA88_loc_0 = 0;
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r1_psq_tmp_0 = 0;
    uint32_t r1_psq_tmp_1 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_8018AA30;

loc_8018AA30:
{
    r3 = 0x80250000u;
    f2.d = std::fabs(f1.d);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11184));
    goto loc_8018AA48;
}

loc_8018AA44:
{
    f2.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f0.d));
}

loc_8018AA48:
{
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8018AA4C:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(1), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8018AA44;
    }
}

loc_8018AA54:
{
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    r1_psq_tmp_0 = (r1 + 12);
    PPC_PsqStStackInline<1u, 3u>(ctx, r1_psq_tmp_0, PPC_PsFromScalarInline(f2.d));
    r0 = MemoryInline::FlatRead16((r1 + 12));
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r0));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    r1_psq_tmp_1 = (r1 + 8);
    PpcSetPairedFprInline(f0, PPC_PsqLStackInline<1u, 3u>(ctx, r1_psq_tmp_1));
    r5 = 0x80290000u;
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_0 & 4080);
    r3 = 0x80250000u;
    r5 = (r5 + -16232);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - PPC_PsToScalarInline(f0.d)));
    r4 = (r5 + r0);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 11188));
    f3.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8018AA88:
{
    addr_lfsx_8018AA88_loc_0 = (r5 + r0);
    f2.d = MemoryInline::FlatReadFloat32(addr_lfsx_8018AA88_loc_0);
    f0.d = PpcFmulsInline(f4.d, f3.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f2.d + f0.d));
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8018AA9C;
    }
}

loc_8018AA98:
{
    f1.d = (-(f1.d));
}

loc_8018AA9C:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000023 gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x0000001F fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8018AA30 func_8018AA30 preserves=true fpr_mask=0x00000000
