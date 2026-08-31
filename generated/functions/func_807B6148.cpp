#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_807B6148(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_807B6148;

loc_807B6148:
{
    r4 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r3 + 84));
    r4 = (r4 + 24856);
    f0.d = MemoryInline::FlatReadFloat32(r4);
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B615C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B61A0;
    }
}

loc_807B6160:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 64));
    r0 = MemoryInline::FlatRead32((r3 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B6170:
{
    MemoryInline::FlatWriteFloat32((r3 + 84), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807B6178:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 76));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B6180:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_807B618C;
    }
}

loc_807B6184:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 68));
    goto loc_807B6190;
}

loc_807B618C:
{
    f1.d = MemoryInline::FlatReadFloat32((r4 + 72));
}

loc_807B6190:
{
    f0.d = MemoryInline::FlatReadFloat32((r3 + 84));
    f0.d = PpcFmulsInline(f0.d, f1.d);
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_807B61A0:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 80));
    r0 = MemoryInline::FlatRead32((r3 + 120));
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    r0 = (r0 & 32);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_807B61B0:
{
    MemoryInline::FlatWriteFloat32((r3 + 84), f1.d);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_807B61B8:
{
    f0.d = MemoryInline::FlatReadFloat32((r4 + 84));
    SetCRFloatResident(cr, 0, f1.d, f0.d);
}

loc_807B61C0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_return;
    }
}

loc_807B61C4:
{
    MemoryInline::FlatWriteFloat32((r3 + 84), f0.d);
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000019 gpr_write=0x00000011 gpr_return=0x00000010 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x807B6148 func_807B6148 preserves=true fpr_mask=0x00000000
