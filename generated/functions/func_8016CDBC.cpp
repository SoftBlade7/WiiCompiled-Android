#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8016CDBC(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r5_mdest_0 = 0;
    uint32_t r5_mdest_1 = 0;
    uint32_t r5_mdest_2 = 0;
    uint32_t r5_mdest_3 = 0;
    uint32_t r5_mrot_0 = 0;
    uint32_t r5_mrot_1 = 0;
    uint32_t r5_mrot_2 = 0;
    uint32_t r5_mrot_3 = 0;
    uint32_t r5_rot_0 = 0;
    uint32_t r5_rot_1 = 0;
    uint32_t r5_rot_2 = 0;
    uint32_t r5_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8016CDBC;

loc_8016CDBC:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r6 = MemoryInline::FlatRead8((r13 + -25680));
}

loc_8016CDD4:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(0))) {
        goto loc_8016CDFC;
    }
}

loc_8016CDD8:
{
    r5 = MemoryInline::FlatRead32((r13 + -25720));
    r4 = 0x80340000u;
    r4 = (r4 + 15844);
    r0 = MemoryInline::FlatRead32((r5 + 20));
    r5 = (r0 & 536870880);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(3));
    r0 = (r0_rot_1 & 1);
    r5 = (r5 + -2147483648);
    MemoryInline::FlatWriteRam8((r4 + 32), static_cast<uint8_t>(r0));
    MemoryInline::FlatWriteRam32((r4 + 24), r5);
}

loc_8016CDFC:
{
    r0 = MemoryInline::FlatRead8((r13 + -25679));
}

loc_8016CE04:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(0))) {
        goto loc_8016CE38;
    }
}

loc_8016CE08:
{
    r7 = MemoryInline::FlatRead32((r13 + -25716));
    r4 = 0x80340000u;
    r4 = (r4 + 15808);
    r0 = MemoryInline::FlatRead16((r7 + 58));
    r5 = MemoryInline::FlatRead16((r7 + 56));
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r5_mrot_1 = (r5_rot_1 & -65536);
    r5_mdest_1 = (r5 & 65535);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r0 = (r5 + -2147483648);
    MemoryInline::FlatWriteRam32((r4 + 20), r0);
    r0 = MemoryInline::FlatRead16((r7 + 50));
    r5 = MemoryInline::FlatRead16((r7 + 48));
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(16));
    r5_mrot_2 = (r5_rot_2 & -65536);
    r5_mdest_2 = (r5 & 65535);
    r5 = (r5_mdest_2 | r5_mrot_2);
    MemoryInline::FlatWriteRam32((r4 + 28), r5);
}

loc_8016CE38:
{
    r0 = MemoryInline::FlatRead8((r13 + -25656));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8016CE40:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016CE78;
    }
}

loc_8016CE44:
{
    r8 = 0x80340000u;
    r6 = 0x80340000u;
    r8 = (r8 + 15808);
    r6 = (r6 + 15844);
    r7 = MemoryInline::FlatRead32((r8 + 20));
    r5 = MemoryInline::FlatRead32((r8 + 28));
    r4 = MemoryInline::FlatRead32((r6 + 24));
    r0 = MemoryInline::FlatRead8((r6 + 32));
    MemoryInline::FlatWriteRam32((r6 + 20), r7);
    MemoryInline::FlatWriteRam32((r6 + 28), r5);
    MemoryInline::FlatWriteRam32((r8 + 24), r4);
    MemoryInline::FlatWriteRam8((r8 + 32), static_cast<uint8_t>(r0));
    goto loc_8016CEA8;
}

loc_8016CE78:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(0));
}

loc_8016CE7C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8016CEA8;
    }
}

loc_8016CE80:
{
    r5 = 0x80340000u;
    r5 = (r5 + 15844);
    r4 = MemoryInline::FlatRead32((r5 + 20));
    r0 = MemoryInline::FlatRead32((r5 + 24));
    r4 = (r0 - r4);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
    MemoryInline::FlatWriteRam32((r5 + 28), r4);
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8016CEA8;
    }
}

loc_8016CE9C:
{
    r0 = MemoryInline::FlatRead32((r5 + 8));
    r0 = (r4 + r0);
    MemoryInline::FlatWriteRam32((r5 + 28), r0);
}

loc_8016CEA8:
{
    ctx->gpr[1] = r1;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000021FB gpr_write=0x000001FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8016CDBC func_8016CDBC preserves=true fpr_mask=0x00000000
