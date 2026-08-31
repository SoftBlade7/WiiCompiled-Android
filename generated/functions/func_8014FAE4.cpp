#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8014FAE4(CpuContext* MKW_RESTRICT ctx)
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

    goto loc_8014FAE4;

loc_8014FAE4:
{
    r0 = MemoryInline::FlatRead8((r4 + 2));
    r6 = 1;
    r7 = 1;
    r8 = 1;
}

loc_8014FAF8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014FB30;
    }
}

loc_8014FAFC:
{
    r0 = MemoryInline::FlatRead16((r4 + 4));
}

loc_8014FB04:
{
    if ((static_cast<uint32_t>(r0) < static_cast<uint32_t>(48))) {
        goto loc_8014FB24;
    }
}

loc_8014FB08:
{
}

loc_8014FB0C:
{
    MemoryInline::FlatWrite16((r3 + 58), static_cast<uint16_t>(r0));
    if ((static_cast<uint32_t>(r0) <= static_cast<uint32_t>(1691))) {
        goto loc_8014FB30;
    }
}

loc_8014FB14:
{
    r0 = 1691;
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
    MemoryInline::FlatWrite16((r3 + 58), static_cast<uint16_t>(r0));
    goto loc_8014FB30;
}

loc_8014FB24:
{
    r0 = 48;
    r6 = 0;
    MemoryInline::FlatWrite16((r4 + 4), static_cast<uint16_t>(r0));
}

loc_8014FB30:
{
    r0 = MemoryInline::FlatRead8((r4 + 32));
}

loc_8014FB38:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014FB58;
    }
}

loc_8014FB3C:
{
    r0 = MemoryInline::FlatRead16((r4 + 34));
}

loc_8014FB44:
{
    if ((static_cast<int32_t>(r0) != static_cast<int32_t>(0))) {
        goto loc_8014FB58;
    }
}

loc_8014FB48:
{
    r5 = 65536;
    r8 = 0;
    r0 = (r5 + -1);
    MemoryInline::FlatWrite16((r4 + 34), static_cast<uint16_t>(r0));
}

loc_8014FB58:
{
    r0 = MemoryInline::FlatRead8((r4 + 6));
}

loc_8014FB60:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014FBB0;
    }
}

loc_8014FB64:
{
    r0 = MemoryInline::FlatRead8((r4 + 9));
}

loc_8014FB6C:
{
    if ((static_cast<uint32_t>(r0) > static_cast<uint32_t>(2))) {
        goto loc_8014FBA4;
    }
}

loc_8014FB70:
{
    r5 = MemoryInline::FlatRead32((r4 + 8));
    r0 = MemoryInline::FlatRead32((r4 + 12));
    MemoryInline::FlatWrite32((r3 + 64), r5);
    MemoryInline::FlatWrite32((r3 + 68), r0);
    r5 = MemoryInline::FlatRead32((r4 + 16));
    r0 = MemoryInline::FlatRead32((r4 + 20));
    MemoryInline::FlatWrite32((r3 + 72), r5);
    MemoryInline::FlatWrite32((r3 + 76), r0);
    r5 = MemoryInline::FlatRead32((r4 + 24));
    r0 = MemoryInline::FlatRead32((r4 + 28));
    MemoryInline::FlatWrite32((r3 + 80), r5);
    MemoryInline::FlatWrite32((r3 + 84), r0);
    goto loc_8014FBB0;
}

loc_8014FBA4:
{
    r0 = 1;
    r7 = 0;
    MemoryInline::FlatWrite8((r4 + 9), static_cast<uint8_t>(r0));
}

loc_8014FBB0:
{
}

loc_8014FBB4:
{
    r3 = 0;
    r0 = 0;
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8014FBD4;
    }
}

loc_8014FBC0:
{
}

loc_8014FBC4:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8014FBD4;
    }
}

loc_8014FBC8:
{
}

loc_8014FBCC:
{
    if ((static_cast<int32_t>(r7) == static_cast<int32_t>(0))) {
        goto loc_8014FBD4;
    }
}

loc_8014FBD0:
{
    r0 = 1;
}

loc_8014FBD4:
{
}

loc_8014FBD8:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8014FBE0;
    }
}

loc_8014FBDC:
{
    r3 = 1;
}

loc_8014FBE0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8014FBE4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_return;
    }
}

loc_8014FBE8:
{
    r0 = 1;
}

loc_8014FBF0:
{
    MemoryInline::FlatWrite16(r4, static_cast<uint16_t>(r0));
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8014FC00;
    }
}

loc_8014FBF8:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 2), static_cast<uint8_t>(r0));
}

loc_8014FC00:
{
}

loc_8014FC04:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8014FC10;
    }
}

loc_8014FC08:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 32), static_cast<uint8_t>(r0));
}

loc_8014FC10:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r7), static_cast<int32_t>(0));
}

loc_8014FC14:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8014FC20;
    }
}

loc_8014FC18:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 6), static_cast<uint8_t>(r0));
}

loc_8014FC20:
{
    r0 = 0;
    MemoryInline::FlatWrite8((r4 + 36), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
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
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001E9 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8014FAE4 func_8014FAE4 preserves=true fpr_mask=0x00000000
