#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80576618(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    uint32_t cr = ctx->cr;

    goto loc_80576618;

loc_80576618:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 44));
    r4 = MemoryInline::FlatRead32((r3 + 32));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    MemoryInline::FlatWriteFloat32((r3 + 40), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 4));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80576634:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8057663C;
    }
}

loc_80576638:
{
    MemoryInline::FlatWriteFloat32((r3 + 40), f1.d);
}

loc_8057663C:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 44));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 48));
    r4 = MemoryInline::FlatRead32((r3 + 32));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 44), f0.d);
    f1.d = MemoryInline::FlatReadFloat32((r4 + 8));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_80576658:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_80576660;
    }
}

loc_8057665C:
{
    MemoryInline::FlatWriteFloat32((r3 + 44), f1.d);
}

loc_80576660:
{
    f1.d = MemoryInline::FlatReadFloat32((r3 + 36));
    f0.d = MemoryInline::FlatReadFloat32((r3 + 40));
    f2.d = MemoryInline::FlatReadFloat32((r3 + 52));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r3 + 36), f0.d);
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_80576678:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_8057667C:
{
    MemoryInline::FlatWriteFloat32((r3 + 36), f2.d);
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000008 gpr_write=0x00000010 gpr_return=0x00000010 fpr_read=0x00000006 fpr_write=0x00000007 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80576618 func_80576618 preserves=true fpr_mask=0x00000000
