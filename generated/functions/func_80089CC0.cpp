#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80089CC0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r3_rot_0 = 0;
    uint32_t r3_rot_1 = 0;
    uint32_t r3_rot_2 = 0;
    uint32_t r3_rot_3 = 0;
    uint32_t r3_rot_4 = 0;
    uint32_t r3_rot_5 = 0;
    uint32_t r4_rot_0 = 0;
    uint32_t r4_rot_1 = 0;
    uint32_t r4_rot_2 = 0;
    uint32_t r4_rot_3 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80089CC0;

loc_80089CC0:
{
    MemoryInline::FlatWriteRam32((r1 + -32), r1);
    r1 = (r1 + -32);
    r0 = ctx->lr;
    MemoryInline::FlatWriteRam32((r1 + 36), r0);
    MemoryInline::FlatWriteRam32((r1 + 28), r31);
    MemoryInline::FlatWriteRam32((r1 + 24), r30);
    MemoryInline::FlatWriteRam32((r1 + 20), r29);
    r29 = r3;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65ACu>(ctx);
    r3 = ctx->gpr[3];
    r0 = MemoryInline::FlatRead32((r29 + 16));
    r31 = r3;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80089CEC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80089CFC;
    }
}

loc_80089CF0:
{
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_80089DE4;
}

loc_80089CFC:
{
    r4 = MemoryInline::FlatRead32(r29);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_80089D04:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80089D1C;
    }
}

loc_80089D08:
{
    r3 = MemoryInline::FlatRead16((r4 + 162));
    r0 = MemoryInline::FlatRead16((r4 + 164));
    r3_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(16));
    r3 = (r3_rot_1 & -65536);
    r30 = (r3 + r0);
    goto loc_80089D20;
}

loc_80089D1C:
{
    r30 = 0;
}

loc_80089D20:
{
    ctx->lr = 0x80089D24u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x800887F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r29 = ctx->gpr[29];
    r30 = ctx->gpr[30];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    // inline leaf 0x80088EB0 (2 guest instruction(s))
    r3 = MemoryInline::FlatRead32((r3 + 4));
    // end of inlined leaf 0x80088EB0
}

loc_80089D2C:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_80089D38;
    }
}

loc_80089D34:
{
    r3 = (r3 + -2147483648);
}

loc_80089D38:
{
}

loc_80089D3C:
{
    r4 = 0;
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80089D58;
    }
}

loc_80089D44:
{
}

loc_80089D48:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80089D64;
    }
}

loc_80089D4C:
{
}

loc_80089D50:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(1))) {
        goto loc_80089D6C;
    }
}

loc_80089D54:
{
    goto loc_80089D70;
}

loc_80089D58:
{
    r3_rot_3 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(1));
    r3 = (r3_rot_3 & -2);
    r4 = (r3 + 2);
    goto loc_80089D70;
}

loc_80089D64:
{
    r4 = r3;
    goto loc_80089D70;
}

loc_80089D6C:
{
    r4_rot_1 = PpcRotl32Inline(static_cast<uint32_t>(r3), static_cast<uint32_t>(31));
    r4 = (r4_rot_1 & 2147483647);
}

loc_80089D70:
{
    r0 = MemoryInline::FlatRead32((r29 + 20));
}

loc_80089D78:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(3))) {
        goto loc_80089D90;
    }
}

loc_80089D7C:
{
}

loc_80089D80:
{
    if ((static_cast<int32_t>(r0) == static_cast<int32_t>(2))) {
        goto loc_80089D98;
    }
}

loc_80089D84:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(1));
}

loc_80089D88:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80089DA0;
    }
}

loc_80089D8C:
{
    goto loc_80089DA8;
}

loc_80089D90:
{
    r0 = (r4 + 512);
    goto loc_80089DB8;
}

loc_80089D98:
{
    r0 = (r4 + 256);
    goto loc_80089DB8;
}

loc_80089DA0:
{
    r0 = (r4 + 128);
    goto loc_80089DB8;
}

loc_80089DA8:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
    goto loc_80089DE4;
}

loc_80089DB8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r30));
}

loc_80089DBC:
{
    if (((cr & 0x40000000u) != 0)) {
        goto loc_80089DD8;
    }
}

loc_80089DC0:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r30), static_cast<uint32_t>(r0));
}

loc_80089DC4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_80089DD8;
    }
}

loc_80089DC8:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 1;
    goto loc_80089DE4;
}

loc_80089DD8:
{
    r3 = r31;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    InvokeDirectCpu<0x801A65D4u>(ctx);
    r3 = ctx->gpr[3];
    r3 = 0;
}

loc_80089DE4:
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

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80089CC0 func_80089CC0 preserves=true fpr_mask=0x00000000
