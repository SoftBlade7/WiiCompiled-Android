#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80021478(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr6_0 = 0;
    uint32_t cr7_0 = 0;
    uint32_t fctiwzword0 = 0;

    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    PPC_FPR f4 = ctx->fpr[4];
    uint32_t cr = ctx->cr;

    goto loc_80021478;

loc_80021478:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r4 = 0x80240000u;
    r4 = (r4 + 28848);
    r3 = 0;
    f0.d = MemoryInline::FlatReadFloat64(r4);
    f3.d = MemoryInline::FlatReadFloat64((r4 + 8));
    f4.d = MemoryInline::FlatReadFloat64((r4 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80021498:
{
    SetCRFloatResident(cr, 6, f1.d, f3.d);
}

loc_8002149C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_800214CC;
    }
}

loc_800214A0:
{
    r3 = (r3 + -1);
    if (((cr & 0x00000080u) == 0)) {
        goto loc_800214CC;
    }
}

loc_800214A8:
{
    SetCRFloatResident(cr, 7, f1.d, f4.d);
}

loc_800214AC:
{
    f2.d = f1.d;
    if (((cr & 0x00000008u) != 0)) {
        goto loc_800214B8;
    }
}

loc_800214B4:
{
    f2.d = (f1.d - f4.d);
}

loc_800214B8:
{
    f2.d = PPC_Fctiwz(f2.d);
    fctiwzword0 = PPC_FprLowWordInline(f2.d);
    r3 = fctiwzword0;
    if (((cr & 0x00000008u) != 0)) {
        goto loc_800214CC;
    }
}

loc_800214C8:
{
    r3 = (r3 + -2147483648);
}

loc_800214CC:
{
    r1 = (r1 + 16);
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->fpr[4] = f4;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x0000000A gpr_write=0x0000001A gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001D fpr_return=0x00000000 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80021478 func_80021478 preserves=true fpr_mask=0x00000000
