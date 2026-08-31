#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801AF2F0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t cr1_0 = 0;
    uint32_t r0_addc_right_0 = 0;
    uint32_t r0_addc_right_1 = 0;
    uint32_t r0_addc_right_2 = 0;
    uint32_t r0_addc_right_3 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r4_adde_right_0 = 0;
    uint32_t r4_adde_right_1 = 0;
    uint32_t r4_adde_right_2 = 0;
    uint32_t r4_adde_right_3 = 0;
    uint32_t r4_ca_0 = 0;
    uint32_t r4_ca_1 = 0;
    uint32_t r4_ca_2 = 0;
    uint32_t r4_ca_3 = 0;
    uint32_t r4_ca_4 = 0;
    uint32_t r5_addc_left_0 = 0;
    uint32_t r5_addc_left_1 = 0;
    uint32_t r5_addc_left_2 = 0;
    uint32_t r5_addc_left_3 = 0;
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
    uint32_t r5_rot_4 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    uint32_t r13 = ctx->gpr[13];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801AF2F0;

loc_801AF2F0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    r0 = MemoryInline::FlatRead32((r13 + -25152));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AF304:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AF310;
    }
}

loc_801AF308:
{
    r3 = 1;
    goto loc_801AF43C;
}

loc_801AF310:
{
    r3 = MemoryInline::FlatRead32((r13 + -28920));
    ctx->lr = 0x801AF318u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A0504u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r4 = MemoryInline::FlatRead32((r13 + -25184));
    SetCRResident(cr, xer, 1, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801AF320:
{
    if (((cr & 0x02000000u) != 0)) {
        goto loc_801AF37C;
    }
}

loc_801AF324:
{
    r0 = 0;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(1));
}

loc_801AF32C:
{
    MemoryInline::FlatWrite32((r13 + -25184), r0);
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AF35C;
    }
}

loc_801AF334:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_801AF340;
    }
}

loc_801AF338:
{
    if (((cr & 0x08000000u) == 0)) {
        goto loc_801AF34C;
    }
}

loc_801AF33C:
{
    goto loc_801AF378;
}

loc_801AF340:
{
}

loc_801AF344:
{
    if ((static_cast<int32_t>(r4) >= static_cast<int32_t>(6))) {
        goto loc_801AF378;
    }
}

loc_801AF348:
{
    goto loc_801AF36C;
}

loc_801AF34C:
{
    r3 = 0x801B0000u;
    r3 = (r3 + -1600);
    MemoryInline::FlatWrite32((r13 + -28900), r3);
    goto loc_801AF378;
}

loc_801AF35C:
{
    r3 = 0x801B0000u;
    r3 = (r3 + -1320);
    MemoryInline::FlatWrite32((r13 + -28900), r3);
    goto loc_801AF378;
}

loc_801AF36C:
{
    r3 = 0x801B0000u;
    r3 = (r3 + -1040);
    MemoryInline::FlatWrite32((r13 + -28900), r3);
}

loc_801AF378:
{
    MemoryInline::FlatWrite32((r13 + -28904), r4);
}

loc_801AF37C:
{
    r0 = MemoryInline::FlatRead32((r13 + -25100));
    r3 = 1;
    MemoryInline::FlatWrite32((r13 + -25152), r3);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_801AF38C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801AF3F0;
    }
}

loc_801AF390:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AAD5Cu>(ctx);
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r8 = (static_cast<int32_t>(r3) >> 16);
    r5 = 65536;
    r0 = (static_cast<int32_t>(r3) >> 31);
    r6 = 0;
    r7 = (r5 + -1);
    r5_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(16));
    r5 = (r5_rot_1 & -1);
    r0 = (static_cast<int32_t>(r3) >> 31);
    r5_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r5_mrot_1 = (r5_rot_2 & -65536);
    r5_mdest_1 = (r5 & 65535);
    r5 = (r5_mdest_1 | r5_mrot_1);
    r4 = (r4 & r7);
    r0 = (static_cast<int32_t>(r3) >> 16);
    r0 = (r5 & r7);
    r5 = (r3 & r7);
    r0_addc_right_1 = r0;
    r0 = (r4 + r0_addc_right_1);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r4)) + static_cast<uint64_t>(static_cast<uint32_t>(r0_addc_right_1)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r7 = (r8 & r7);
    r4_ca_1 = (xer >> 29) & 1u;
    r4 = (r6 + r6);
    r4 = (r4 + r4_ca_1);
    r3 = 0x80000000u;
    r5_addc_left_1 = r5;
    r5 = (r5_addc_left_1 + r0);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r5_addc_left_1)) + static_cast<uint64_t>(static_cast<uint32_t>(r0)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r0 = -268435456;
    r4_adde_right_1 = r4;
    r4_ca_2 = (xer >> 29) & 1u;
    r4 = (r6 + r4_adde_right_1);
    r4 = (r4 + r4_ca_2);
    r4 = (r7 + r5);
    {
        const uint64_t ppcCarryWide = static_cast<uint64_t>(static_cast<uint32_t>(r7)) + static_cast<uint64_t>(static_cast<uint32_t>(r5)) + (static_cast<uint64_t>(static_cast<uint32_t>(0)) & 1u);
        xer = (xer & 0xDFFFFFFFu) | (static_cast<uint32_t>((ppcCarryWide >> 32) & 1u) << 29);
    }
    r4 = (r4 & 16383);
    MemoryInline::FlatWriteRam16((r3 + 12512), static_cast<uint16_t>(r4));
    MemoryInline::FlatWrite32((r13 + -25164), r0);
}

loc_801AF3F0:
{
    r3 = 0x80000000u;
    r6 = 0x80350000u;
    r0 = MemoryInline::FlatRead16((r3 + 12512));
    r4 = (r6 + -32272);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r0), static_cast<uint32_t>(8));
    r0 = (r0_rot_1 & 4194048);
    r7 = (r0 | 1291845632);
    r5 = (r0 | 1296039936);
    r3 = (r0 | 1300234240);
    r0 = (r0 | 1304428544);
    MemoryInline::FlatWriteRam32((r6 + -32272), r7);
    MemoryInline::FlatWriteRam32((r4 + 4), r5);
    MemoryInline::FlatWriteRam32((r4 + 8), r3);
    MemoryInline::FlatWriteRam32((r4 + 12), r0);
    ctx->lr = 0x801AF428u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801B3BA4u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    r7 = ctx->gpr[7];
    r8 = ctx->gpr[8];
    r13 = ctx->gpr[13];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x802A0000u;
    r3 = (r3 + -13112);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    ctx->xer = xer;
    InvokeDirectCpu<0x801A8238u>(ctx);
    r0 = ctx->gpr[0];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    cr = ctx->cr;
    r3 = -268435456;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->xer = xer;
    InvokeDirectCpu<0x801AF0DCu>(ctx);
    r3 = ctx->gpr[3];
}

loc_801AF43C:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFE7FF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x801AF2F0 func_801AF2F0 preserves=true fpr_mask=0x00000000
