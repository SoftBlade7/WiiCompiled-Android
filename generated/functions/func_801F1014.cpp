#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_801F1014(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint32_t r0_mdest_0 = 0;
    uint32_t r0_mrot_0 = 0;
    uint32_t r0_rot_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r5 = ctx->gpr[5];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_801F1014;

loc_801F1014:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_801F1018:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1024;
    }
}

loc_801F101C:
{
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r4), static_cast<int32_t>(0));
}

loc_801F1020:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_801F102C;
    }
}

loc_801F1024:
{
    r3 = 1;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

loc_801F102C:
{
    r0 = 1;
    MemoryInline::FlatWrite32(r4, r0);
    guest_range_0 = MemoryInline::ResolveRangeHost(r3, 0, 512u, true, false);
    r5 = MemoryInline::ReadResolved8(guest_range_0, 0u, r3);
}

loc_801F103C:
{
    if ((static_cast<uint32_t>(r5) != static_cast<uint32_t>(235))) {
        goto loc_801F104C;
    }
}

loc_801F1040:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 2u, (r3 + 2));
}

loc_801F1048:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(144))) {
        goto loc_801F105C;
    }
}

loc_801F104C:
{
}

loc_801F1050:
{
    if ((static_cast<uint32_t>(r5) == static_cast<uint32_t>(233))) {
        goto loc_801F105C;
    }
}

loc_801F1054:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801F105C:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 510u, (r3 + 510));
}

loc_801F1064:
{
    if ((static_cast<uint32_t>(r0) != static_cast<uint32_t>(85))) {
        goto loc_801F1074;
    }
}

loc_801F1068:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 511u, (r3 + 511));
}

loc_801F1070:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(170))) {
        goto loc_801F107C;
    }
}

loc_801F1074:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801F107C:
{
    r5 = MemoryInline::ReadResolved8(guest_range_0, 12u, (r3 + 12));
    r0 = MemoryInline::ReadResolved8(guest_range_0, 11u, (r3 + 11));
    r0_rot_0 = PpcRotl32Inline(static_cast<uint32_t>(r5), static_cast<uint32_t>(8));
    r0_mrot_0 = (r0_rot_0 & 65280);
    r0_mdest_0 = (r0 & -65281);
    r0 = (r0_mdest_0 | r0_mrot_0);
}

loc_801F108C:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(512))) {
        goto loc_801F10B4;
    }
}

loc_801F1090:
{
    r0 = (r0 & 65535);
}

loc_801F1098:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1024))) {
        goto loc_801F10B4;
    }
}

loc_801F109C:
{
}

loc_801F10A0:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2048))) {
        goto loc_801F10B4;
    }
}

loc_801F10A4:
{
}

loc_801F10A8:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4096))) {
        goto loc_801F10B4;
    }
}

loc_801F10AC:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801F10B4:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 13u, (r3 + 13));
}

loc_801F10BC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(1))) {
        goto loc_801F1100;
    }
}

loc_801F10C0:
{
}

loc_801F10C4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(2))) {
        goto loc_801F1100;
    }
}

loc_801F10C8:
{
}

loc_801F10CC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(4))) {
        goto loc_801F1100;
    }
}

loc_801F10D0:
{
}

loc_801F10D4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(8))) {
        goto loc_801F1100;
    }
}

loc_801F10D8:
{
}

loc_801F10DC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(16))) {
        goto loc_801F1100;
    }
}

loc_801F10E0:
{
}

loc_801F10E4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(32))) {
        goto loc_801F1100;
    }
}

loc_801F10E8:
{
}

loc_801F10EC:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(64))) {
        goto loc_801F1100;
    }
}

loc_801F10F0:
{
}

loc_801F10F4:
{
    if ((static_cast<uint32_t>(r0) == static_cast<uint32_t>(128))) {
        goto loc_801F1100;
    }
}

loc_801F10F8:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801F1100:
{
    r0 = MemoryInline::ReadResolved8(guest_range_0, 21u, (r3 + 21));
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(240));
}

loc_801F1108:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1154;
    }
}

loc_801F110C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(248));
}

loc_801F1110:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1154;
    }
}

loc_801F1114:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(249));
}

loc_801F1118:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1154;
    }
}

loc_801F111C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(250));
}

loc_801F1120:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1154;
    }
}

loc_801F1124:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(251));
}

loc_801F1128:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1154;
    }
}

loc_801F112C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(252));
}

loc_801F1130:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1154;
    }
}

loc_801F1134:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(253));
}

loc_801F1138:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1154;
    }
}

loc_801F113C:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(254));
}

loc_801F1140:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1154;
    }
}

loc_801F1144:
{
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r0), static_cast<uint32_t>(255));
}

loc_801F1148:
{
    if (((cr & 0x20000000u) != 0)) {
        goto loc_801F1154;
    }
}

loc_801F114C:
{
    r0 = 0;
    MemoryInline::FlatWrite32(r4, r0);
}

loc_801F1154:
{
    r3 = 0;
    ctx->gpr[0] = r0;
    ctx->gpr[3] = r3;
    ctx->gpr[5] = r5;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0x00000039 gpr_write=0x00000029 gpr_return=0x00000008 fpr_read=0x00000000 fpr_write=0x00000000 fpr_return=0x00000000 cr_read=0x01 cr_write=0x01 xer_read=1 xer_write=0 fence=0
// RECOMP_REGISTRATION base 0x801F1014 func_801F1014 preserves=true fpr_mask=0x00000000
