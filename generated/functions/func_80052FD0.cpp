#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80052FD0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r2 = ctx->gpr[2];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
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

    goto loc_80052FD0;

loc_80052FD0:
{
    r5 = MemoryInline::FlatRead16(r3);
    f2.d = MemoryInline::FlatReadFloat32((r3 + 8));
    r0 = (r5 + -1);
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = (r0 * 12);
    SetCRFloatResident(cr, 0, f1.d, f2.d);
}

loc_80052FE8:
{
    r4 = (r3 + r0);
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80052FFC;
    }
}

loc_80052FF4:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    goto loc_800530FC;
}

loc_80052FFC:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80053004:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80053014;
    }
}

loc_8005300C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 12));
    goto loc_800530FC;
}

loc_80053014:
{
    MemoryInline::FlatWriteRam16((r1 + 8), static_cast<uint16_t>(r5));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    r4 = (r1 + 8);
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
    r3 = (r3 + r0);
    r3 = (r3 + 8);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_8005304C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80053060;
    }
}

loc_80053050:
{
    r3 = (r3 + -12);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80053058:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80053050;
    }
}

loc_8005305C:
{
    goto loc_80053074;
}

loc_80053060:
{
    r3 = (r3 + 12);
    f0.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_80053068:
{
    cr = PpcCrLogicalResident(cr, static_cast<uint32_t>(7), static_cast<uint32_t>(2), static_cast<uint32_t>(0), static_cast<uint32_t>(2));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80053060;
    }
}

loc_80053070:
{
    r3 = (r3 + -12);
}

loc_80053074:
{
    f3.d = MemoryInline::FlatReadFloat32(r3);
    SetCRFloatResident(cr, 0, f3.d, f1.d);
}

loc_8005307C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80053088;
    }
}

loc_80053080:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 4));
    goto loc_800530FC;
}

loc_80053088:
{
    f2.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f10.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f3.d));
    f0.d = MemoryInline::FlatReadFloat32((r2 + -29836));
    f11.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f3.d));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f5.d = MemoryInline::FlatReadFloat32((r3 + 4));
    f1.d = MemoryInline::FlatReadFloat32((r2 + -29832));
    PpcSetPairedFprInline(f8, PPC_Fres(PPC_PsFromScalarInline(f11.d)));
    f4.d = MemoryInline::FlatReadFloat32((r2 + -29840));
    f7.d = MemoryInline::FlatReadFloat32((r3 + 20));
    f6.d = MemoryInline::FlatReadFloat32((r3 + 8));
    PpcSetPairedFprInline(f9, PPC_PsAddInline(f8.d, f8.d));
    PpcSetPairedFprInline(f8, PPC_PsMulInline(f8.d, f8.d));
    f3.d = static_cast<double>(PpcForceSingleValueInline(f5.d - f2.d));
    PpcSetPairedFprInline(f8, PPC_PsNmsubInline(PPC_PsFromScalarInline(f11.d), f8.d, f9.d));
    f9.d = PpcFmulsInline(f10.d, PPC_PsToScalarInline(f8.d));
    f2.d = PpcFmulsInline(f0.d, f9.d);
    f8.d = static_cast<double>(PpcForceSingleValueInline(f9.d - f4.d));
    f0.d = PpcFmulsInline(f9.d, f7.d);
    f4.d = static_cast<double>(PpcForceSingleValueInline(f2.d - f1.d));
    f1.d = PpcFmulsInline(f8.d, f6.d);
    f2.d = PpcFmulsInline(f10.d, f8.d);
    f3.d = PpcFmulsInline(f4.d, f3.d);
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    f1.d = PpcFmulsInline(f9.d, f3.d);
    f0.d = PpcFmulsInline(f2.d, f0.d);
    f1.d = PpcFmulsInline(f9.d, f1.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f5.d + f1.d));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
}

loc_800530FC:
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

// RECOMP_GUEST_ABI gpr_read=0x0000003F gpr_write=0x0000003B gpr_return=0x00000018 fpr_read=0x00000FFF fpr_write=0x00000FFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80052FD0 func_80052FD0 preserves=true fpr_mask=0x00000000
