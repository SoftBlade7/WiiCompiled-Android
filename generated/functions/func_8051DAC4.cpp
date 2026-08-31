#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_8051DAC4(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t r6 = ctx->gpr[6];
    uint32_t r7 = ctx->gpr[7];
    uint32_t r8 = ctx->gpr[8];
    PPC_FPR f0 = ctx->fpr[0];
    PPC_FPR f1 = ctx->fpr[1];
    PPC_FPR f2 = ctx->fpr[2];
    PPC_FPR f3 = ctx->fpr[3];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_8051DAC4;

loc_8051DAC4:
{
    r0 = MemoryInline::FlatRead32((r4 + 96));
    r7 = 0x80890000u;
    r7 = (r7 + -1208);
    r8 = 1;
    r6 = (r0 & 49155);
}

loc_8051DAD8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(16386));
}

loc_8051DADC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051DBD0;
    }
}

loc_8051DAE0:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DB0C;
    }
}

loc_8051DAE4:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(3));
}

loc_8051DAE8:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051DB90;
    }
}

loc_8051DAEC:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DB00;
    }
}

loc_8051DAF0:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(1));
}

loc_8051DAF4:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051DB40;
    }
}

loc_8051DAF8:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DB54;
    }
}

loc_8051DAFC:
{
    goto loc_8051DC10;
}

loc_8051DB00:
{
}

loc_8051DB04:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(16384))) {
        goto loc_8051DB68;
    }
}

loc_8051DB08:
{
    goto loc_8051DC10;
}

loc_8051DB0C:
{
    r3 = 65536;
    r0 = (r3 + -32767);
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r6), static_cast<int32_t>(r0));
}

loc_8051DB18:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051DBB0;
    }
}

loc_8051DB1C:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DB30;
    }
}

loc_8051DB20:
{
    r0 = (r3 + -32768);
}

loc_8051DB28:
{
    if ((static_cast<int32_t>(r6) >= static_cast<int32_t>(r0))) {
        goto loc_8051DB7C;
    }
}

loc_8051DB2C:
{
    goto loc_8051DC10;
}

loc_8051DB30:
{
    r0 = (r3 + -16384);
}

loc_8051DB38:
{
    if ((static_cast<int32_t>(r6) == static_cast<int32_t>(r0))) {
        goto loc_8051DBF0;
    }
}

loc_8051DB3C:
{
    goto loc_8051DC10;
}

loc_8051DB40:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    goto loc_8051DC14;
}

loc_8051DB54:
{
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f0.d));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    goto loc_8051DC14;
}

loc_8051DB68:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f0.d = MemoryInline::FlatReadFloat32((r7 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32((r5 + 4), f0.d);
    goto loc_8051DC14;
}

loc_8051DB7C:
{
    f1.d = MemoryInline::FlatReadFloat32(r5);
    f0.d = MemoryInline::FlatReadFloat32((r7 + 276));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f0.d));
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    goto loc_8051DC14;
}

loc_8051DB90:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r7 + 280));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r5 + 4), f1.d);
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    goto loc_8051DC14;
}

loc_8051DBB0:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r7 + 280));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d - f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r5 + 4), f1.d);
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    goto loc_8051DC14;
}

loc_8051DBD0:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r7 + 280));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f2.d));
    MemoryInline::FlatWriteFloat32((r5 + 4), f1.d);
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    goto loc_8051DC14;
}

loc_8051DBF0:
{
    f1.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r7 + 280));
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = static_cast<double>(PpcForceSingleValueInline(f1.d + f2.d));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    MemoryInline::FlatWriteFloat32((r5 + 4), f1.d);
    MemoryInline::FlatWriteFloat32(r5, f0.d);
    goto loc_8051DC14;
}

loc_8051DC10:
{
    r8 = 0;
}

loc_8051DC14:
{
}

loc_8051DC18:
{
    if ((static_cast<int32_t>(r8) == static_cast<int32_t>(0))) {
        goto loc_8051DC7C;
    }
}

loc_8051DC1C:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::FlatReadFloat32((r7 + 272));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8051DC28:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051DC30;
    }
}

loc_8051DC2C:
{
    goto loc_8051DC44;
}

loc_8051DC30:
{
    f1.d = MemoryInline::FlatReadFloat32((r7 + 284));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8051DC38:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DC40;
    }
}

loc_8051DC3C:
{
    goto loc_8051DC44;
}

loc_8051DC40:
{
    f1.d = f0.d;
}

loc_8051DC44:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::FlatReadFloat32((r7 + 272));
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8051DC54:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051DC5C;
    }
}

loc_8051DC58:
{
    goto loc_8051DC70;
}

loc_8051DC5C:
{
    f2.d = MemoryInline::FlatReadFloat32((r7 + 284));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8051DC64:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DC6C;
    }
}

loc_8051DC68:
{
    goto loc_8051DC70;
}

loc_8051DC6C:
{
    f2.d = f0.d;
}

loc_8051DC70:
{
    MemoryInline::FlatWriteFloat32((r5 + 4), f2.d);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8051DC7C:
{
    guest_range_0 = MemoryInline::ResolveRangeHost((r7 + 272), 0, 20u, true, false);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r7 + 276));
    r0 = 1;
    f0.d = MemoryInline::FlatReadFloat32((r4 + 108));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r7 + 272));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8051DC94:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051DC9C;
    }
}

loc_8051DC98:
{
    goto loc_8051DCB0;
}

loc_8051DC9C:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r7 + 284));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8051DCA4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DCAC;
    }
}

loc_8051DCA8:
{
    goto loc_8051DCB0;
}

loc_8051DCAC:
{
    f2.d = f0.d;
}

loc_8051DCB0:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 4u, (r7 + 276));
    f0.d = MemoryInline::FlatReadFloat32((r4 + 112));
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r7 + 272));
    f0.d = PpcFmulsInline(f1.d, f0.d);
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8051DCC4:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051DCCC;
    }
}

loc_8051DCC8:
{
    goto loc_8051DCE0;
}

loc_8051DCCC:
{
    f3.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r7 + 284));
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8051DCD4:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DCDC;
    }
}

loc_8051DCD8:
{
    goto loc_8051DCE0;
}

loc_8051DCDC:
{
    f3.d = f0.d;
}

loc_8051DCE0:
{
    f0.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 16u, (r7 + 288));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8051DCE8:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051DCF8;
    }
}

loc_8051DCEC:
{
    SetCRFloatResident(cr, 0, f0.d, f3.d);
}

loc_8051DCF0:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_8051DCF8;
    }
}

loc_8051DCF4:
{
    r0 = 0;
}

loc_8051DCF8:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_8051DCFC:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_8051DD68;
    }
}

loc_8051DD00:
{
    f0.d = MemoryInline::FlatReadFloat32(r5);
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r7 + 272));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d + f2.d));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8051DD10:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051DD18;
    }
}

loc_8051DD14:
{
    goto loc_8051DD2C;
}

loc_8051DD18:
{
    f1.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r7 + 284));
    SetCRFloatResident(cr, 0, f0.d, f1.d);
}

loc_8051DD20:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DD28;
    }
}

loc_8051DD24:
{
    goto loc_8051DD2C;
}

loc_8051DD28:
{
    f1.d = f0.d;
}

loc_8051DD2C:
{
    f0.d = MemoryInline::FlatReadFloat32((r5 + 4));
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 0u, (r7 + 272));
    f0.d = static_cast<double>(PpcForceSingleValueInline(f0.d - f3.d));
    MemoryInline::FlatWriteFloat32(r5, f1.d);
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8051DD40:
{
    if (((cr & 0x40000000u) == 0)) {
        goto loc_8051DD48;
    }
}

loc_8051DD44:
{
    goto loc_8051DD5C;
}

loc_8051DD48:
{
    f2.d = MemoryInline::ReadResolvedFloat32(guest_range_0, 12u, (r7 + 284));
    SetCRFloatResident(cr, 0, f0.d, f2.d);
}

loc_8051DD50:
{
    if (((cr & 0x80000000u) == 0)) {
        goto loc_8051DD58;
    }
}

loc_8051DD54:
{
    goto loc_8051DD5C;
}

loc_8051DD58:
{
    f2.d = f0.d;
}

loc_8051DD5C:
{
    MemoryInline::FlatWriteFloat32((r5 + 4), f2.d);
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

loc_8051DD68:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[6] = r6;
    ctx->gpr[7] = r7;
    ctx->gpr[8] = r8;
    ctx->fpr[0] = f0;
    ctx->fpr[1] = f1;
    ctx->fpr[2] = f2;
    ctx->fpr[3] = f3;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x000001F9 gpr_write=0x000001C9 gpr_return=0x00000008 fpr_read=0x0000000F fpr_write=0x0000000F fpr_return=0x00000002 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x8051DAC4 func_8051DAC4 preserves=true fpr_mask=0x00000000
