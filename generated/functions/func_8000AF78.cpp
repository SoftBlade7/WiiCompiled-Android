#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8000AF78(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8000AF78;

loc_8000AF78:
{
    r3 = MemoryInline::FlatRead32((r3 + 248));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_8000AF80:
{
    r5 = (r3 & -16777216);
    r6 = (r3 & 16711680);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000AFC0;
    }
}

loc_8000AF8C:
{
}

loc_8000AF90:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_8000AFC0;
    }
}

loc_8000AF94:
{
    r0 = (r5 + 16777216);
}

loc_8000AF9C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8000AFC0;
    }
}

loc_8000AFA0:
{
}

loc_8000AFA4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8000AFC0;
    }
}

loc_8000AFA8:
{
    r0 = (r6 + -16711680);
}

loc_8000AFB0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(0))) {
        goto loc_8000AFC0;
    }
}

loc_8000AFB4:
{
    r0 = (r3 + 65536);
}

loc_8000AFBC:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(65535))) {
        goto loc_8000AFD8;
    }
}

loc_8000AFC0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000AFC4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000AFD0;
    }
}

loc_8000AFC8:
{
    r0 = -1;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_8000AFD0:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

loc_8000AFD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_8000AFDC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8000AFE4;
    }
}

loc_8000AFE0:
{
    MemoryInline::FlatWrite32(r4, r3);
}

loc_8000AFE4:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000079 gpr_write=0x00000069 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8000AF78 func_8000AF78 preserves=true fpr_mask=0x00000000
