#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805F2AEC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_805F2AEC;

loc_805F2AEC:
{
    r3 = 0x80890000u;
    f1.d = MemoryInline::FlatReadFloat32((r1 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_805F2AFC:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2B04;
    }
}

loc_805F2B00:
{
    goto loc_805F2B08;
}

loc_805F2B04:
{
    f1.d = (-(f1.d));
}

loc_805F2B08:
{
    r3 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r1 + 8));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23712));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_805F2B18:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805F2B20;
    }
}

loc_805F2B1C:
{
    goto loc_805F2B24;
}

loc_805F2B20:
{
    f2.d = (-(f2.d));
}

loc_805F2B24:
{
    r3 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 23936));
    f0.d = PpcFmulsInline(f0.d, f2.d);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f1.d));
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80021478u>(ctx);
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    f0 = ctx->fpr[0];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
}

loc_805F2C50:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000002 gpr_write=0x8000001B gpr_return=0x00000018 fpr_read=0x0000001E fpr_write=0x0000001F fpr_return=0x00000002 cr_read=0xC1 cr_write=0xC1 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805F2AEC func_805F2AEC preserves=true fpr_mask=0x00000000
