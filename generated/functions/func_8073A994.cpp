#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8073A994(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r11 = ctx->gpr[11];
    uint32_t r27 = ctx->gpr[27];
    uint32_t r28 = ctx->gpr[28];
    uint32_t r29 = ctx->gpr[29];
    uint32_t r30 = ctx->gpr[30];
    uint32_t r31 = ctx->gpr[31];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8073A994;

loc_8073A994:
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
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r27 = r4;
    r3 = MemoryInline::FlatRead32(r3);
    r3 = MemoryInline::FlatRead32((r3 + 4));
    r0 = MemoryInline::FlatRead32((r3 + 8));
    r0 = (r0 & -2147483648);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073A9C0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073A9D0;
    }
}

loc_8073A9C4:
{
    r0 = MemoryInline::FlatRead32((r3 + 12));
    r0 = (r0 & 32768);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073A9CC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073A9D8;
    }
}

loc_8073A9D0:
{
    r3 = 0;
    goto loc_8073AA8C;
}

loc_8073A9D8:
{
    r28 = 0;
    r30 = 0x808D0000u;
    r31 = 0x809C0000u;
    goto loc_8073AA74;
}

loc_8073A9E8:
{
    f1.d = MemoryInline::FlatReadFloat32((r30 + -20516));
    f3.d = MemoryInline::FlatReadFloat32((r3 + 72));
    f2.d = MemoryInline::FlatReadFloat32((r27 + 16));
    f0.d = (-(f1.d));
    f2.d = static_cast<double>(PpcForceSingleValueInline(f3.d - f2.d));
    SetCRFloatResident(cr, 0, f2.d, f0.d);
}

loc_8073AA00:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_8073AA0C;
    }
}

loc_8073AA04:
{
    SetCRFloatResident(cr, 0, f2.d, f1.d);
}

loc_8073AA08:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8073AA14;
    }
}

loc_8073AA0C:
{
    r0 = 0;
    goto loc_8073AA18;
}

loc_8073AA14:
{
    r0 = 1;
}

loc_8073AA18:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073AA1C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073AA74;
    }
}

loc_8073AA20:
{
    r3 = r29;
    // inline leaf 0x807A2234 (7 guest instruction(s))
    r0 = MemoryInline::FlatRead32((r3 + 4));
    r3 = 0x809C0000u;
    r3 = (r3 + 12104);
    r0 = (r0 * 116);
    r3 = (r3 + r0);
    r3 = MemoryInline::FlatRead8((r3 + 89));
    // end of inlined leaf 0x807A2234
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073AA2C:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073AA74;
    }
}

loc_8073AA30:
{
    r0 = MemoryInline::FlatRead32((r29 + 120));
    r0 = (r0 & 8);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8073AA38:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8073AA74;
    }
}

loc_8073AA3C:
{
    r4 = 0x808A0000u;
    r3 = 0x808A0000u;
    f1.d = MemoryInline::FlatReadFloat32((r4 + 10016));
    r28 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r3 + 10020));
    MemoryInline::FlatWriteFloat32((r27 + 40), f1.d);
    MemoryInline::FlatWriteFloat32((r27 + 36), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 68));
    MemoryInline::FlatWriteFloat32((r27 + 24), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 72));
    MemoryInline::FlatWriteFloat32((r27 + 28), f0.d);
    f0.d = MemoryInline::FlatReadFloat32((r29 + 76));
    MemoryInline::FlatWriteFloat32((r27 + 32), f0.d);
    goto loc_8073AA88;
}

loc_8073AA74:
{
    r3 = MemoryInline::FlatRead32((r31 + 12016));
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->cr = cr;
    InvokeDirectCpu<0x80785DF4u>(ctx);
    r0 = ctx->gpr[0];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    cr = ctx->cr;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_8073AA80:
{
    r29 = r3;
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8073A9E8;
    }
}

loc_8073AA88:
{
    r3 = r28;
}

loc_8073AA8C:
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
    ctx->gpr[11] = r11;
    ctx->gpr[27] = r27;
    ctx->gpr[28] = r28;
    ctx->gpr[29] = r29;
    ctx->gpr[30] = r30;
    ctx->gpr[31] = r31;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xF800003B gpr_write=0xF800083B gpr_return=0x00000018 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8073A994 func_8073A994 preserves=true fpr_mask=0x00000000
