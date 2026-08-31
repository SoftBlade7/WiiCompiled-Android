#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8056F73C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8056F73C;

loc_8056F73C:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r5 = 552075264;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r5 = (r5 + 4095);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    MemoryInline::FlatWriteRam32((r1 + 8), r30);
    r30 = r4;
    r0 = MemoryInline::FlatRead32(r4);
    r0 = (r0 & r5);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F77C;
    }
}

loc_8056F76C:
{
    r3 = r30;
    r4 = r5;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    InvokeDirectCpu<0x807BD96Cu>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    goto loc_8056F780;
}

loc_8056F77C:
{
    r3 = 0;
}

loc_8056F780:
{
}

loc_8056F784:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8056F7A0;
    }
}

loc_8056F788:
{
    r4 = 0x809C0000u;
    r3 = (r31 + 4);
    r4 = MemoryInline::FlatRead32((r4 + 15324));
    r0 = MemoryInline::FlatRead16((r4 + 4));
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(24));
    r4 = (r4_rot_1 & 7);
    // inline leaf 0x8059197C (7 guest instruction(s))
    r5 = MemoryInline::FlatRead32(r3);
    r5 = MemoryInline::FlatRead32((r5 + 68));
    MemoryInline::FlatWrite8((r5 + 33), static_cast<uint8_t>(r4));
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 72));
    MemoryInline::FlatWrite8((r3 + 33), static_cast<uint8_t>(r4));
    // end of inlined leaf 0x8059197C
}

loc_8056F7A0:
{
    r3 = -804192256;
    r4 = MemoryInline::FlatRead32(r30);
    r0 = (r3 + -4096);
    r0 = (r4 & r0);
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8056F7C0;
    }
}

loc_8056F7B4:
{
    r0 = MemoryInline::FlatRead32((r31 + 44));
    r0 = (r0 | 1);
    MemoryInline::FlatWrite32((r31 + 44), r0);
}

loc_8056F7C0:
{
    r0 = MemoryInline::FlatRead32(r30);
    r0 = (r0 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8056F7C8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8056F7D8;
    }
}

loc_8056F7CC:
{
    r0 = MemoryInline::FlatRead32((r31 + 44));
    r0 = (r0 | 2);
    MemoryInline::FlatWrite32((r31 + 44), r0);
}

loc_8056F7D8:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r30 = MemoryInline::FlatRead32((r1 + 8));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xC000007B gpr_write=0xC00000FB gpr_return=0x00000018 fpr_read=0x00000003 fpr_write=0x00000003 fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8056F73C func_8056F73C preserves=true fpr_mask=0x00000000
