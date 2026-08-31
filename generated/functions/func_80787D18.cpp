#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80787D18(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;

    goto loc_80787D18;

loc_80787D18:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 12));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 16));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80787D24:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80787D2C;
    }
}

loc_80787D28:
{
    f1.d = f0.d;
}

loc_80787D2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 20));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80787D34:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80787D3C;
    }
}

loc_80787D38:
{
    f1.d = f0.d;
}

loc_80787D3C:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 24));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80787D44:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_return;
    }
}

loc_80787D48:
{
    f1.d = f0.d;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000000 gpr_return=0x00000000 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80787D18 func_80787D18 preserves=true fpr_mask=0x00000000
