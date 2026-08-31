#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8065C078(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_mdest_0 = 0;
    uint32_t r3_mrot_0 = 0;
    uint32_t r3_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8065C078;

loc_8065C078:
{
    r0 = MemoryInline::FlatRead8((r4 + 25));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8065C080:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065C098;
    }
}

loc_8065C084:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8065C088:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8065C098;
    }
}

loc_8065C08C:
{
    r5 = MemoryInline::FlatRead8((r4 + 26));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r5), static_cast<uint32_t>(16));
}

loc_8065C094:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8065C0A0;
    }
}

loc_8065C098:
{
    r3 = 16;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_8065C0A0:
{
    r0 = MemoryInline::FlatRead8((r4 + 27));
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(5));
    r3 = (r3_rot_0 & 224);
    r3_mrot_0 = (r5 & 31);
    r3_mdest_0 = (r3 & -32);
    r3 = (r3_mdest_0 | r3_mrot_0);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000031 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8065C078 func_8065C078 preserves=true fpr_mask=0x00000000
