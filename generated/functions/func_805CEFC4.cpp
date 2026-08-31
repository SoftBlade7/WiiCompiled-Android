#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805CEFC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t fctiwzword0 = 0;
    uint32_t fctiwzword1 = 0;
    uint32_t fctiwzword2 = 0;
    uint32_t fctiwzword3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
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
    uint32_t cr = ctx->cr;

    goto loc_805CEFC4;

loc_805CEFC4:
{
    r4 = 0x80890000u;
    MemoryInline::FlatWriteRam32((r1 + -48), r1);
    r1 = (r1 + -48);
    r4 = (r4 + 15984);
    f5.d = MemoryInline::FlatReadFloat32((r4 + 440));
    SetCRFloatResident(cr, 0, f1.d, f5.d);
}

loc_805CEFD8:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_805CEFF8;
    }
}

loc_805CEFDC:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 444));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805CEFE4:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CEFF8;
    }
}

loc_805CEFE8:
{
    SetCRFloatResident(cr, 0, f3.d, f0.d);
}

loc_805CEFEC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805CEFF8;
    }
}

loc_805CEFF0:
{
    SetCRFloatResident(cr, 0, f4.d, f5.d);
}

loc_805CEFF4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805CF00C;
    }
}

loc_805CEFF8:
{
    r4 = -1;
    r0 = 1;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r0));
    goto loc_805CF060;
}

loc_805CF00C:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 448));
    f5.d = PpcFmulsInline(f0.d, f1.d);
    f1.d = PpcFmulsInline(f0.d, f3.d);
    f2.d = PpcFmulsInline(f0.d, f2.d);
    f0.d = PpcFmulsInline(f0.d, f4.d);
    f3.d = PPC_Fctiwz(f5.d);
    f2.d = PPC_Fctiwz(f2.d);
    f1.d = PPC_Fctiwz(f1.d);
    fctiwzword0 = PPC_FprLowWordInline(f3.d);
    f0.d = PPC_Fctiwz(f0.d);
    fctiwzword1 = PPC_FprLowWordInline(f2.d);
    r6 = fctiwzword0;
    fctiwzword2 = PPC_FprLowWordInline(f1.d);
    r5 = fctiwzword1;
    fctiwzword3 = PPC_FprLowWordInline(f0.d);
    r4 = fctiwzword2;
    r0 = fctiwzword3;
    MemoryInline::FlatWrite16(r3, static_cast<uint16_t>(r6));
    MemoryInline::FlatWrite16((r3 + 2), static_cast<uint16_t>(r5));
    MemoryInline::FlatWrite16((r3 + 4), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite16((r3 + 6), static_cast<uint16_t>(r0));
}

loc_805CF060:
{
    r1 = (r1 + 48);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[5] = f5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000007A gpr_write=0x00000073 gpr_return=0x00000010 fpr_read=0x0000003F fpr_write=0x0000002F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805CEFC4 func_805CEFC4 preserves=true fpr_mask=0x00000000
