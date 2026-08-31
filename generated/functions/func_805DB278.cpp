#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_805DB278(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

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

    goto loc_805DB278;

loc_805DB278:
{
    r7 = r3;
    r9 = 0;
    r5 = 0;
    goto loc_805DB300;
}

loc_805DB288:
{
    r0 = MemoryInline::FlatRead8((r7 + 4));
}

loc_805DB290:
{
    if ((static_cast<uint32_t>(r4) == static_cast<uint32_t>(r0))) {
        goto loc_805DB2A0;
    }
}

loc_805DB294:
{
    r0 = MemoryInline::FlatRead8((r7 + 5));
}

loc_805DB29C:
{
    if ((static_cast<uint32_t>(r4) != static_cast<uint32_t>(r0))) {
        goto loc_805DB2F4;
    }
}

loc_805DB2A0:
{
    r0 = MemoryInline::FlatRead32(r7);
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_2 & 255);
}

loc_805DB2AC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_805DB2F4;
    }
}

loc_805DB2B0:
{
    r10 = r9;
    r8 = (r3 + r5);
    goto loc_805DB2DC;
}

loc_805DB2BC:
{
    r0 = MemoryInline::FlatRead32((r8 + 8));
    r10 = (r10 + 1);
    MemoryInline::FlatWrite32(r8, r0);
    r0 = MemoryInline::FlatRead8((r8 + 12));
    MemoryInline::FlatWrite8((r8 + 4), static_cast<uint8_t>(r0));
    r0 = MemoryInline::FlatRead8((r8 + 13));
    MemoryInline::FlatWrite8((r8 + 5), static_cast<uint8_t>(r0));
    r8 = (r8 + 8);
}

loc_805DB2DC:
{
    r6 = MemoryInline::FlatRead32((r3 + 240));
    r0 = (r6 + -1);
}

loc_805DB2E8:
{
    if ((static_cast<int32_t>(r10) < static_cast<int32_t>(r0))) {
        goto loc_805DB2BC;
    }
}

loc_805DB2EC:
{
    MemoryInline::FlatWrite32((r3 + 240), r0);
    goto loc_805DB300;
}

loc_805DB2F4:
{
    r7 = (r7 + 8);
    r9 = (r9 + 1);
    r5 = (r5 + 8);
}

loc_805DB300:
{
    r0 = MemoryInline::FlatRead32((r3 + 240));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r9), static_cast<int32_t>(r0));
}

loc_805DB308:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_805DB288;
    }
}

loc_805DB30C:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(2));
    r0 = (r0_rot_4 & 1020);
    r4 = 0;
    r3 = (r3 + r0);
    MemoryInline::FlatWrite32((r3 + 244), r4);
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->gpr[9] = r9;
    ctx->gpr[10] = r10;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000007F9 gpr_write=0x000007F9 gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x805DB278 func_805DB278 preserves=true fpr_mask=0x00000000
