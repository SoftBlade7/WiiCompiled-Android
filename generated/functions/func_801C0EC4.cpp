#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801C0EC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r5_addr_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801C0EC4;

loc_801C0EC4:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 0x80350000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(2));
    r0 = (r0_rot_0 & -4);
    r5 = (r5 + 2352);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r5_addr_0 = (r5 + r0);
    r31 = MemoryInline::FlatRead32(r5_addr_0);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r31 + 2236));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(-1));
}

loc_801C0EF8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C0F04;
    }
}

loc_801C0EFC:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C0F78;
}

loc_801C0F04:
{
    r0 = MemoryInline::FlatRead32((r13 + -24524));
}

loc_801C0F0C:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_801C0F2C;
    }
}

loc_801C0F10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(0));
}

loc_801C0F14:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C0F24;
    }
}

loc_801C0F18:
{
    r0 = MemoryInline::FlatRead32((r31 + 2260));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801C0F20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C0F2C;
    }
}

loc_801C0F24:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C0F78;
}

loc_801C0F2C:
{
}

loc_801C0F30:
{
    if ((static_cast<int32_t>(r30) != static_cast<int32_t>(0))) {
        goto loc_801C0F40;
    }
}

loc_801C0F34:
{
    r0 = MemoryInline::FlatRead32((r31 + 2260));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801C0F3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801C0F54;
    }
}

loc_801C0F40:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(1));
}

loc_801C0F44:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C0F5C;
    }
}

loc_801C0F48:
{
    r0 = MemoryInline::FlatRead32((r31 + 2260));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_801C0F50:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801C0F5C;
    }
}

loc_801C0F54:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_801C0F78;
}

loc_801C0F5C:
{
    r4 = (0 - r30);
    r0 = 1;
    r4 = (r4 | r30);
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r4 = (r4_rot_1 & 1);
    MemoryInline::FlatWrite32((r31 + 2260), r4);
    MemoryInline::FlatWrite32((r31 + 2256), r0);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_801C0F78:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000201B gpr_write=0xC000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801C0EC4 func_801C0EC4 preserves=true fpr_mask=0x00000000
