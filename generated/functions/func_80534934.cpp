#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80534934(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_subfic_ra_0 = 0;
    uint32_t r0_subfic_ra_1 = 0;
    uint32_t r0_subfic_ra_2 = 0;
    uint32_t r0_subfic_ra_3 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r7_rot_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80534934;

loc_80534934:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r31 = r3;
    r3 = MemoryInline::FlatRead32((r3 + 76));
    // inline leaf 0x800850B0 (22 guest instruction(s))
    r6 = 1431633920;
    r5 = 858980352;
    r7_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r7 = (r7_rot_0 & 2147483647);
    r4 = 252641280;
    r0 = (r6 + 21845);
    r5 = (r5 + 13107);
    r6 = (r7 & r0);
    r0 = (r4 + 3855);
    r4 = (r3 - r6);
    r3_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(30));
    r3 = (r3_rot_0 & 1073741823);
    r4 = (r4 & r5);
    r3 = (r3 & r5);
    r4 = (r4 + r3);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(28));
    r3 = (r3_rot_1 & 268435455);
    r3 = (r4 + r3);
    r3 = (r3 & r0);
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(24));
    r0 = (r0_rot_0 & 16777215);
    r3 = (r3 + r0);
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r0 = (r0_rot_1 & 65535);
    r3 = (r3 + r0);
    r3 = (r3 & 63);
    // end of inlined leaf 0x800850B0
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80534954:
{
    r3 = 0;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_805349A4;
    }
}

loc_8053495C:
{
    r4 = MemoryInline::FlatRead32((r31 + 76));
    r0 = (r4 + -1);
    r3 = PPC_CntlzwInline(static_cast<uint32_t>(r4));
    r0 = (r0 & ~r4);
    r0 = PPC_CntlzwInline(static_cast<uint32_t>(r0));
    r0_subfic_ra_1 = r0;
    r0 = (32 - r0_subfic_ra_1);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(32) >= static_cast<uint32_t>(r0_subfic_ra_1) ? 1u : 0u) << 29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80534978:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80534984;
    }
}

loc_8053497C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80534980:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8053498C;
    }
}

loc_80534984:
{
    r3 = 0;
    goto loc_805349A4;
}

loc_8053498C:
{
    r0 = (r3 + r0);
    r0_subfic_ra_2 = r0;
    r0 = (31 - r0_subfic_ra_2);
    xer = (xer & 0xDFFFFFFFu) | ((static_cast<uint32_t>(31) >= static_cast<uint32_t>(r0_subfic_ra_2) ? 1u : 0u) << 29);
    r3 = (static_cast<int32_t>(static_cast<int16_t>(r0)));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(9));
}

loc_8053499C:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_805349A4;
    }
}

loc_805349A0:
{
    r3 = 0;
}

loc_805349A4:
{
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r31 = MemoryInline::FlatRead32((r1 + 12));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    ctx->xer = xer;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x8000001B gpr_write=0x800000FB gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=1 fence=0
// RECOMP_REGISTRATION base 0x80534934 func_80534934 preserves=true fpr_mask=0x00000000
