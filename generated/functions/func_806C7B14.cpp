#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_806C7B14(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_806C7B14;

loc_806C7B14:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r6;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    MemoryInline::FlatWriteRam32((r1 + 16), r28);
    r28 = r7;
    // inline leaf 0x8055F8D0 (3 guest instruction(s))
    MemoryInline::FlatWrite32(r3, r4);
    MemoryInline::FlatWrite32((r3 + 4), r5);
    // end of inlined leaf 0x8055F8D0
    r3 = 0x808C0000u;
    MemoryInline::FlatWrite32((r29 + 12), r28);
    r3 = (r3 + 18168);
    r28 = (r30 & 65535);
    r0 = (r3 + 8);
    MemoryInline::FlatWrite32((r29 + 16), r3);
    r30 = 0;
    r31 = 0;
    MemoryInline::FlatWrite32((r29 + 8), r0);
}

loc_806C7B64:
{
    r0 = MemoryInline::FlatRead32(r29);
    r4 = 1;
    r3 = (r0 + r31);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_806C7B7C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806C7B8C;
    }
}

loc_806C7B80:
{
}

loc_806C7B84:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806C7B8C;
    }
}

loc_806C7B88:
{
    r4 = 0;
}

loc_806C7B8C:
{
}

loc_806C7B90:
{
    if ((static_cast<int32_t>(r4) == static_cast<int32_t>(0))) {
        goto loc_806C7B9C;
    }
}

loc_806C7B94:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_806C7BA0;
}

loc_806C7B9C:
{
    r3 = 0;
}

loc_806C7BA0:
{
}

loc_806C7BA4:
{
    MemoryInline::FlatWrite16((r3 + 290), static_cast<uint16_t>(r28));
    r4 = r29;
    if ((static_cast<int32_t>(r29) == static_cast<int32_t>(0))) {
        goto loc_806C7BB4;
    }
}

loc_806C7BB0:
{
    r4 = (r29 + 8);
}

loc_806C7BB4:
{
    r0 = MemoryInline::FlatRead32(r29);
    r5 = 1;
    r3 = (r0 + r31);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_806C7BCC:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806C7BDC;
    }
}

loc_806C7BD0:
{
}

loc_806C7BD4:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806C7BDC;
    }
}

loc_806C7BD8:
{
    r5 = 0;
}

loc_806C7BDC:
{
}

loc_806C7BE0:
{
    if ((static_cast<int32_t>(r5) == static_cast<int32_t>(0))) {
        goto loc_806C7BEC;
    }
}

loc_806C7BE4:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_806C7BF0;
}

loc_806C7BEC:
{
    r3 = 0;
}

loc_806C7BF0:
{
    MemoryInline::FlatWrite32((r3 + 284), r4);
    r4 = 1;
    r0 = MemoryInline::FlatRead32(r29);
    r3 = (r0 + r31);
    r3 = MemoryInline::FlatRead32((r3 + 20));
    r0 = MemoryInline::FlatRead32((r3 + 4));
}

loc_806C7C0C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_806C7C1C;
    }
}

loc_806C7C10:
{
}

loc_806C7C14:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_806C7C1C;
    }
}

loc_806C7C18:
{
    r4 = 0;
}

loc_806C7C1C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_806C7C20:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_806C7C2C;
    }
}

loc_806C7C24:
{
    r3 = MemoryInline::FlatRead32(r3);
    goto loc_806C7C30;
}

loc_806C7C2C:
{
    r3 = 0;
}

loc_806C7C30:
{
    r4 = 2;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x800728F0u>(ctx);
    r0 = ctx->gpr[0];
    cr = ctx->cr;
    r30 = (r30 + 1);
    r31 = (r31 + 4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r30), static_cast<int32_t>(2));
}

loc_806C7C44:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_806C7B64;
    }
}

loc_806C7C48:
{
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r3 = r29;
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    r28 = MemoryInline::FlatRead32((r1 + 16));
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF00000FB gpr_write=0xF000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x806C7B14 func_806C7B14 preserves=true fpr_mask=0x00000000
