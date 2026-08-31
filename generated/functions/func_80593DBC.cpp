#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80593DBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80593DBC;

loc_80593DBC:
{
    r5 = 0x80890000u;
    f2.d = MemoryInline::FlatReadFloat32((r3 + 16));
    f0.d = MemoryInline::FlatReadFloat32((r5 + 7872));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80593DCC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80593DE0;
    }
}

loc_80593DD0:
{
    r5 = 0x80890000u;
    f0.d = MemoryInline::FlatReadFloat32((r5 + 7880));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80593DDC:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80593DEC;
    }
}

loc_80593DE0:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80593DE8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_80593DEC:
{
    MemoryInline::FlatWrite16((r3 + 24), static_cast<uint16_t>(r4));
    r5 = MemoryInline::FlatRead32((r3 + 52));
    MemoryInline::FlatWriteFloat32((r3 + 16), f1.d);
    r5 = MemoryInline::FlatRead32((r5 + 4));
    MemoryInline::FlatWrite16((r5 + 16), static_cast<uint16_t>(r4));
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    InvokeDirectCpu<0x80593E18u>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    f0 = ctx->fpr[0];
    f1 = ctx->fpr[1];
    f2 = ctx->fpr[2];
    cr = ctx->cr;
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[5] = r5;
    ctx->fpr[0] = f0;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000003F gpr_write=0xC000007B gpr_return=0x00000018 fpr_read=0x8000037F fpr_write=0x800003FF fpr_return=0x00000002 cr_read=0xFF cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80593DBC func_80593DBC preserves=true fpr_mask=0x00000000
