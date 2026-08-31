#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8012F398(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8012F398;

loc_8012F398:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    r31 = (r4 + -8);
    r0 = (r31 & 1);
}

loc_8012F3B0:
{
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    r30 = r4;
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012F3CC;
    }
}

loc_8012F3C4:
{
    r0 = 0;
    goto loc_8012F3F8;
}

loc_8012F3CC:
{
    r0 = MemoryInline::FlatRead8((r31 + 4));
}

loc_8012F3D4:
{
    if ((static_cast<uint32_t>(r0) >= static_cast<uint32_t>(9))) {
        goto loc_8012F3F4;
    }
}

loc_8012F3D8:
{
    r3 = 0x80310000u;
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(4));
    r0 = (r0_rot_1 & 4080);
    r3 = (r3 + -26176);
    r3 = (r3 + 196608);
    r3 = (r3 + r0);
    r0 = MemoryInline::FlatRead16((r3 + -30232));
    goto loc_8012F3F8;
}

loc_8012F3F4:
{
    r0 = 0;
}

loc_8012F3F8:
{
    r4 = (r4 + r0);
    r0 = (r4 & 1);
}

loc_8012F400:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8012F40C;
    }
}

loc_8012F404:
{
    r0 = 1;
    goto loc_8012F428;
}

loc_8012F40C:
{
    r3 = -574947328;
    r4 = MemoryInline::FlatRead32(r4);
    r0 = (r3 + -8774);
    r3 = (r0 - r4);
    r0 = (r4 - r0);
    r0 = (r3 | r0);
    r0_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
    r0 = (r0_rot_3 & 1);
}

loc_8012F428:
{
    r0 = (r0 & 255);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8012F42C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012F44C;
    }
}

loc_8012F430:
{
    r3 = 65536;
    r4 = 0x80280000u;
    r0 = (r3 + -1);
    r3 = (r0 & 65535);
    r4 = (r4 + 10120);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
    goto loc_8012F4BC;
}

loc_8012F44C:
{
    r0 = MemoryInline::FlatRead8((r31 + 6));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(1));
}

loc_8012F454:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012F474;
    }
}

loc_8012F458:
{
    r3 = 65536;
    r4 = 0x80280000u;
    r0 = (r3 + -7);
    r3 = (r0 & 65535);
    r4 = (r4 + 10180);
    // inline leaf 0x801302CC (1 guest instruction(s))
    // end of inlined leaf 0x801302CC
    goto loc_8012F4BC;
}

loc_8012F474:
{
    ctx->lr = 0x8012F478u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    InvokeDirectCpu<0x80130288u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r3 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8012F480:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8012F494;
    }
}

loc_8012F484:
{
    r0 = (r3 + -8);
    MemoryInline::FlatWrite32(r31, r0);
    MemoryInline::FlatWrite32(r29, r30);
    goto loc_8012F4A4;
}

loc_8012F494:
{
    MemoryInline::FlatWrite32(r29, r30);
    r0 = 0;
    MemoryInline::FlatWrite32((r29 + 4), r30);
    MemoryInline::FlatWrite32(r31, r0);
}

loc_8012F4A4:
{
    r3 = MemoryInline::FlatRead16((r29 + 8));
    r0 = 2;
    r3 = (r3 + 1);
    MemoryInline::FlatWrite16((r29 + 8), static_cast<uint16_t>(r3));
    MemoryInline::FlatWrite8((r31 + 6), static_cast<uint8_t>(r0));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80130264u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
}

loc_8012F4BC:
{
    r0 = MemoryInline::FlatRead32((r1 + 36));
    r31 = MemoryInline::FlatRead32((r1 + 28));
    r30 = MemoryInline::FlatRead32((r1 + 24));
    r29 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xE000001B gpr_write=0xE000003B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8012F398 func_8012F398 preserves=true fpr_mask=0x00000000
