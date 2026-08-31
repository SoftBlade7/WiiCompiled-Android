#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805EF138(CpuContext* MKW_RESTRICT ctx)
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
    uint32_t ctr = ctx->ctr;
    uint32_t xer = ctx->xer;

    goto loc_805EF138;

loc_805EF138:
{
    r0 = 3;
    r7 = r3;
    r8 = 0;
    r6 = -1;
    r5 = 1;
    ctr = r0;
}

loc_805EF150:
{
}

loc_805EF154:
{
    MemoryInline::FlatWrite32((r7 + 4), r6);
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(2))) {
        goto loc_805EF164;
    }
}

loc_805EF15C:
{
}

loc_805EF160:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(8))) {
        goto loc_805EF16C;
    }
}

loc_805EF164:
{
    r4 = (r3 + r8);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EF16C:
{
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r7 + 8), r6);
}

loc_805EF178:
{
    if ((static_cast<uint32_t>(r8) <= static_cast<uint32_t>(2))) {
        goto loc_805EF184;
    }
}

loc_805EF17C:
{
}

loc_805EF180:
{
    if ((static_cast<int32_t>(r8) != static_cast<int32_t>(8))) {
        goto loc_805EF18C;
    }
}

loc_805EF184:
{
    r4 = (r3 + r8);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EF18C:
{
    r8 = (r8 + 1);
    MemoryInline::FlatWrite32((r7 + 12), r6);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r8), static_cast<uint32_t>(2));
}

loc_805EF198:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805EF1A4;
    }
}

loc_805EF19C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r8), static_cast<int32_t>(8));
}

loc_805EF1A0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_805EF1AC;
    }
}

loc_805EF1A4:
{
    r4 = (r3 + r8);
    MemoryInline::FlatWrite8((r4 + 40), static_cast<uint8_t>(r5));
}

loc_805EF1AC:
{
    r7 = (r7 + 12);
    r8 = (r8 + 1);
    ctr = (ctr + -1);
    if ((ctr != 0)) {
        goto loc_805EF150;
    }
}

loc_805EF1B8:
{
    ctx->gpr[0] = r0;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->ctr = ctr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F8 gpr_write=0x000001F1 gpr_return=0x00000010 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805EF138 func_805EF138 preserves=true fpr_mask=0x00000000
