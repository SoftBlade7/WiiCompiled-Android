#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8001E9CC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r13 = ctx->gpr[13];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8001E9CC;

loc_8001E9CC:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = r7;
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r5;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r4;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r3;
    // inline leaf 0x8001D968 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r13 + -27516));
    // end of inlined leaf 0x8001D968
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8001EA00:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8001EA0C;
    }
}

loc_8001EA04:
{
    r3 = 1;
    goto loc_8001EA58;
}

loc_8001EA0C:
{
    r0 = MemoryInline::FlatRead32(r30);
    r3 = r31;
    MemoryInline::FlatWriteRam32((r1 + 8), r0);
    r4 = r28;
    r6 = r29;
    r5 = (r1 + 8);
    // inline leaf 0x80020D00 (2 guest instruction(s))
    PPC_TrapWord(31, r0, 0);
    // end of inlined leaf 0x80020D00
    r0 = (r3 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8001EA2C:
{
    r3 = MemoryInline::FlatRead32((r1 + 8));
    MemoryInline::FlatWrite32(r30, r3);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001EA44;
    }
}

loc_8001EA38:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(2));
}

loc_8001EA3C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8001EA4C;
    }
}

loc_8001EA40:
{
    goto loc_8001EA54;
}

loc_8001EA44:
{
    r3 = 0;
    goto loc_8001EA58;
}

loc_8001EA4C:
{
    r3 = 2;
    goto loc_8001EA58;
}

loc_8001EA54:
{
    r3 = 1;
}

loc_8001EA58:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00020FB gpr_write=0xF000007B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8001E9CC func_8001E9CC preserves=true fpr_mask=0x00000000
