#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8088BD08(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    PPC_FPR f0 = ctx->fpr[0];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8088BD08;

loc_8088BD08:
{
}

loc_8088BD0C:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(3))) {
        goto loc_8088BD18;
    }
}

loc_8088BD10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(5));
}

loc_8088BD14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8088BD44;
    }
}

loc_8088BD18:
{
    r0 = MemoryInline::FlatRead8((r3 + 388));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8088BD20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8088BD44;
    }
}

loc_8088BD24:
{
    r0 = MemoryInline::FlatRead32((r3 + 400));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65));
}

loc_8088BD2C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8088BD44;
    }
}

loc_8088BD30:
{
    r4 = 0x808B0000u;
    r0 = 0;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 10572));
    MemoryInline::FlatWrite32((r3 + 400), r0);
    MemoryInline::FlatWriteFloat32((r3 + 392), f0.d);
}

loc_8088BD44:
{
    r3 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->fpr[0] = f0;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000019 gpr_return=0x00000018 fpr_read=0x00000001 fpr_write=0x00000001 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8088BD08 func_8088BD08 preserves=true fpr_mask=0x00000000
