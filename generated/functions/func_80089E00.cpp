#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80089E00(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint32_t r0_rot_1 = 0;
    uint32_t r0_rot_2 = 0;
    uint32_t r0_rot_3 = 0;
    uint32_t r0_rot_4 = 0;
    uint32_t r0_rot_5 = 0;
    uint32_t r0_rot_6 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80089E00;

loc_80089E00:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    r11 = (r1 + 32);
    // inline leaf 0x800215A0 (6 guest instruction(s))
    MemoryInline::FlatWriteRam32((r11 + -20), r27);
    MemoryInline::FlatWriteRam32((r11 + -16), r28);
    MemoryInline::FlatWriteRam32((r11 + -12), r29);
    MemoryInline::FlatWriteRam32((r11 + -8), r30);
    MemoryInline::FlatWriteRam32((r11 + -4), r31);
    // end of inlined leaf 0x800215A0
    r31 = r3;
    r27 = r4;
    r28 = r5;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32(r31);
    r30 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80089E30:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80089E3C;
    }
}

loc_80089E34:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80089F04;
}

loc_80089E3C:
{
}

loc_80089E40:
{
    r0 = MemoryInline::FlatRead32((r31 + 20));
    if ((static_cast<int32_t>(r27) == static_cast<int32_t>(0))) {
        goto loc_80089E4C;
    }
}

loc_80089E48:
{
    r27 = (r27 + -2147483648);
}

loc_80089E4C:
{
}

loc_80089E50:
{
    r29 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80089E6C;
    }
}

loc_80089E58:
{
}

loc_80089E5C:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80089EA8;
    }
}

loc_80089E60:
{
}

loc_80089E64:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80089EB0;
    }
}

loc_80089E68:
{
    goto loc_80089EB8;
}

loc_80089E6C:
{
    r3 = 613548032;
    r0_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(1));
    r0 = (r0_rot_2 & -2);
    r3 = (r3 + 18725);
    r4 = (static_cast<uint32_t>((static_cast<uint64_t>(r3) * static_cast<uint64_t>(r28)) >> 32));
    r3 = (r28 - r4);
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r3 = (r3_rot_1 & 2147483647);
    r4 = (r3 + r4);
    r3_rot_2 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(29));
    r3 = (r3_rot_2 & 536870911);
    r5 = (r3 * 14);
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r4), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -16);
    r4 = (r28 - r5);
    r0 = (r4 + r0);
    r29 = (r0 + r3);
    r29 = (r29 + 2);
    goto loc_80089EB8;
}

loc_80089EA8:
{
    r29 = (r27 + r28);
    goto loc_80089EB8;
}

loc_80089EB0:
{
    r0_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r27), static_cast<uint32_t>(31));
    r0 = (r0_rot_1 & 2147483647);
    r29 = (r0 + r28);
}

loc_80089EB8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r4 = MemoryInline::FlatRead32(r31);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80089EC4:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80089ED0;
    }
}

loc_80089EC8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    goto loc_80089EFC;
}

loc_80089ED0:
{
    r0_rot_4 = PpcRotl32Inline(static_cast<uint32_t>(r29), static_cast<uint32_t>(16));
    r0 = (r0_rot_4 & 65535);
    MemoryInline::FlatWrite16((r4 + 154), static_cast<uint16_t>(r0));
    r4 = MemoryInline::FlatRead32(r31);
    MemoryInline::FlatWrite16((r4 + 156), static_cast<uint16_t>(r29));
    r5 = MemoryInline::FlatRead32(r31);
    r4 = MemoryInline::FlatRead32((r5 + 28));
    r0 = (r4 & 1024);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80089EEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80089EF8;
    }
}

loc_80089EF0:
{
    r0 = (r4 | 4096);
    MemoryInline::FlatWrite32((r5 + 28), r0);
}

loc_80089EF8:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80089EFC:
{
    r3 = r30;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
}

loc_80089F04:
{
    r11 = (r1 + 32);
    // inline leaf 0x800215EC (6 guest instruction(s))
    r27 = MemoryInline::FlatRead32((r11 + -20));
    r28 = MemoryInline::FlatRead32((r11 + -16));
    r29 = MemoryInline::FlatRead32((r11 + -12));
    r30 = MemoryInline::FlatRead32((r11 + -8));
    r31 = MemoryInline::FlatRead32((r11 + -4));
    // end of inlined leaf 0x800215EC
    r0 = MemoryInline::FlatRead32((r1 + 36));
    ctx->lr = r0;
    r1 = (r1 + 32);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[5] = r5;
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800003B gpr_write=0xF800083B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x80089E00 func_80089E00 preserves=true fpr_mask=0x00000000
