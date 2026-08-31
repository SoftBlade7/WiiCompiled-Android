#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_808674CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_808674CC;

loc_808674CC:
{
    r0 = (r4 + 65536);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(65535));
}

loc_808674D4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_return;
    }
}

loc_808674D8:
{
    r0 = MemoryInline::FlatRead8((r3 + 38));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_808674E0:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_return;
    }
}

loc_808674E4:
{
    r0 = MemoryInline::FlatRead32((r3 + 24));
    r6 = 1;
    r7 = MemoryInline::FlatRead32((r3 + 32));
    r0 = (r4 - r0);
    r8 = PPC_Slw(static_cast<uint32_t>(r6), static_cast<uint32_t>(r0));
    r0 = (r7 & r8);
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_80867514;
    }
}

loc_80867500:
{
    r6 = MemoryInline::FlatRead16((r3 + 36));
    r6 = (r6 << 16);
    r6 = (static_cast<int32_t>(r6) >> 16);
    r0 = (r7 | r8);
    MemoryInline::FlatWrite32((r3 + 32), r0);
    r0 = (r6 + 1);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
}

loc_80867514:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(0));
}

loc_80867518:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80867538;
    }
}

loc_8086751C:
{
    r5 = MemoryInline::FlatRead16((r3 + 36));
    r5 = (r5 << 16);
    r5 = (static_cast<int32_t>(r5) >> 16);
    r0 = MemoryInline::FlatRead8((r3 + 38));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r5), static_cast<int32_t>(r0));
}

loc_80867528:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80867538;
    }
}

loc_8086752C:
{
    r0 = 0;
    MemoryInline::FlatWrite32((r3 + 32), r0);
    MemoryInline::FlatWrite16((r3 + 36), static_cast<uint16_t>(r0));
}

loc_80867538:
{
    MemoryInline::FlatWrite32((r3 + 28), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

loc_return:
{
    ctx->gpr[0] = r0;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x000001E1 gpr_return=0x00000000 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x808674CC func_808674CC preserves=true fpr_mask=0x00000000
