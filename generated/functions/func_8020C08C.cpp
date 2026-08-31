#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8020C08C(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8020C08C;

loc_8020C08C:
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
    r0 = 0;
    r30 = r6;
    MemoryInline::FlatWrite32(r7, r0);
    r27 = r3;
    r28 = r4;
    r29 = r5;
    r31 = r7;
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208FD8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_8020C0C8:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(26))) {
        goto loc_8020C0E0;
    }
}

loc_8020C0CC:
{
    r0 = (r3 * 20);
    r3 = 0x80380000u;
    r3 = (r3 + 12080);
    r3 = (r3 + r0);
    goto loc_8020C0E4;
}

loc_8020C0E0:
{
    r3 = 0;
}

loc_8020C0E4:
{
}

loc_8020C0E8:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020C0F4;
    }
}

loc_8020C0EC:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    goto loc_8020C0F8;
}

loc_8020C0F4:
{
    r0 = 0;
}

loc_8020C0F8:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(r0));
}

loc_8020C0FC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8020C178;
    }
}

loc_8020C100:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r28), static_cast<int32_t>(0));
}

loc_8020C104:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8020C154;
    }
}

loc_8020C108:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r28), static_cast<uint32_t>(1));
}

loc_8020C10C:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020C168;
    }
}

loc_8020C110:
{
    r3 = r30;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->cr = cr;
    InvokeDirectCpu<0x80208FD8u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r5 = ctx->gpr[5];
    r6 = ctx->gpr[6];
    cr = ctx->cr;
}

loc_8020C11C:
{
    if ((static_cast<uint32_t>(r3) >= static_cast<uint32_t>(26))) {
        goto loc_8020C134;
    }
}

loc_8020C120:
{
    r0 = (r3 * 20);
    r3 = 0x80380000u;
    r3 = (r3 + 12080);
    r3 = (r3 + r0);
    goto loc_8020C138;
}

loc_8020C134:
{
    r3 = 0;
}

loc_8020C138:
{
}

loc_8020C13C:
{
    if ((static_cast<int32_t>(r3) == static_cast<int32_t>(0))) {
        goto loc_8020C148;
    }
}

loc_8020C140:
{
    r0 = MemoryInline::FlatRead32((r3 + 8));
    goto loc_8020C14C;
}

loc_8020C148:
{
    r0 = 1;
}

loc_8020C14C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(2));
}

loc_8020C150:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8020C168;
    }
}

loc_8020C154:
{
    MemoryInline::FlatWrite32(r29, r27);
    r0 = 0;
    r3 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8020C17C;
}

loc_8020C168:
{
    r0 = -22;
    r3 = 0;
    MemoryInline::FlatWrite32(r31, r0);
    goto loc_8020C17C;
}

loc_8020C178:
{
    r3 = 1;
}

loc_8020C17C:
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

// RECOMP_GUEST_ABI gpr_read=0xF80020FB gpr_write=0xF800087B gpr_return=0x00000018 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8020C08C func_8020C08C preserves=true fpr_mask=0x00000000
