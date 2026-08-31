#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806FF5C4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r6_addr_0 = 0;
    uint32_t r6_addr_1 = 0;
    uint32_t r6_addr_2 = 0;
    uint32_t r6_addr_3 = 0;
    uint32_t r6_addr_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r9 = ctx->gpr[9];
    uint32_t r10 = ctx->gpr[10];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806FF5C4;

loc_806FF5C4:
{
    r8 = 0x809C0000u;
    r10 = 0;
    r7 = (r8 + 9056);
    r9 = 0;
    r3 = 0;
    goto loc_806FF600;
}

loc_806FF5DC:
{
    r6 = MemoryInline::FlatRead32((r7 + 8));
    r6_addr_2 = (r6 + r9);
    r0 = MemoryInline::FlatRead32(r6_addr_2);
}

loc_806FF5E8:
{
    if ((static_cast<uint32_t>(r4) > static_cast<uint32_t>(r0))) {
        goto loc_806FF5F8;
    }
}

loc_806FF5EC:
{
}

loc_806FF5F0:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(r5))) {
        goto loc_806FF5F8;
    }
}

loc_806FF5F4:
{
    r6_addr_3 = (r6 + r9);
    MemoryInline::FlatWrite32(r6_addr_3, r3);
}

loc_806FF5F8:
{
    r9 = (r9 + 4);
    r10 = (r10 + 1);
}

loc_806FF600:
{
    r0 = MemoryInline::FlatRead32((r8 + 9056));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r10), static_cast<uint32_t>(r0));
}

loc_806FF608:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806FF5DC;
    }
}

loc_806FF60C:
{
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000006F9 gpr_write=0x000007C9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806FF5C4 func_806FF5C4 preserves=true fpr_mask=0x00000000
