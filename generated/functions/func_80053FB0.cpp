#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80053FB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
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
    uint32_t cr = ctx->cr;

    goto loc_80053FB0;

loc_80053FB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r5 = (r3 + 8);
    r6 = MemoryInline::FlatRead16(r3);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = (r6 + -1);
    r0 = (r0 * 12);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80053FCC:
{
    r4 = (r3 + r0);
    r4 = (r4 + 8);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80053FE4;
    }
}

loc_80053FDC:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    goto loc_800540DC;
}

loc_80053FE4:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80053FEC:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80053FFC;
    }
}

loc_80053FF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    goto loc_800540DC;
}

loc_80053FFC:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    r4 = (r1 + 8);
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r6));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    // psq_load w=1 quant=3 (using PPC_PsqL)
    PpcSetPairedFprInline(f2, PPC_PsqLStackInline<1u, 3u>(ctx, r4));
    r4 = (r1 + 12);
    f0.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f2.d = PpcFmulsInline(f3.d, PPC_PsToScalarInline(f2.d));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    // psq_store w=1 quant=3 (using PPC_PsqSt)
    PPC_PsqStStackInline<1u, 3u>(ctx, r4, PPC_PsFromScalarInline(f0.d));
    r0 = MemoryInline::FlatRead16((r1 + 12));
    r0 = (r0 * 12);
    r4 = (r3 + r0);
    r4 = (r4 + 8);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80054038:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80054050;
    }
}

loc_8005403C:
{
    // nop
}

loc_80054040:
{
    r4 = (r4 + -12);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80054048:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80054040;
    }
}

loc_8005404C:
{
    goto loc_80054064;
}

loc_80054050:
{
    r4 = (r4 + 12);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80054058:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80054050;
    }
}

loc_80054060:
{
    r4 = (r4 + -12);
}

loc_80054064:
{
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8005406C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80054078;
    }
}

loc_80054070:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    goto loc_800540DC;
}

loc_80054078:
{
    f10.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    f7.d = MemoryInline::FlatReadFloat32((r4 + 4));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 16));
    f2.d = MemoryInline::FlatReadFloat32((r2 + -29784));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29780));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f7.d - f0.d));
    PpcSetPairedFprInline(f6, PPC_Fres(PPC_PsFromScalarInline(f11.d)));
    f9.d = MemoryInline::FlatReadFloat32((r4 + 20));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -29788));
    f8.d = MemoryInline::FlatReadFloat32((r4 + 8));
    PpcSetPairedFprInline(f5, PPC_PsAddInline(f6.d, f6.d));
    PpcSetPairedFprInline(f3, PPC_PsMulInline(f6.d, f6.d));
    PpcSetPairedFprInline(f6, PPC_PsNmsubInline(PPC_PsFromScalarInline(f11.d), f3.d, f5.d));
    f3.d = PpcFmulsInline(f10.d, PPC_PsToScalarInline(f6.d));
    f5.d = PPC_Fmsubs(f10.d, PPC_PsToScalarInline(f6.d), f4.d);
    f1.d = PPC_Fmsubs(f2.d, f3.d, f1.d);
    f2.d = PpcFmulsInline(f3.d, f9.d);
    f4.d = PpcFmulsInline(f10.d, f5.d);
    f0.d = PpcFmulsInline(f1.d, f0.d);
    f1.d = PPC_Fmadds(f5.d, f8.d, f2.d);
    f0.d = PpcFmulsInline(f3.d, f0.d);
    f0.d = PPC_Fmadds(f3.d, f0.d, f7.d);
    f1.d = PPC_Fmadds(f4.d, f1.d, f0.d);
}

loc_800540DC:
{
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
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
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007F gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x00000FFF fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80053FB0 func_80053FB0 preserves=true fpr_mask=0x00000000
