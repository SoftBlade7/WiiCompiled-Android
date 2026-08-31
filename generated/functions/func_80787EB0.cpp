#include <cstdint>
#include "ppc_runtime.h"
#include "abi_bridge.h"
#include "memory.h"
#include "recomp_mod_loader.h"

extern "C" void func_80787EB0(CpuContext* MKW_RESTRICT ctx)
{
    uint32_t cr0_0 = 0;
    uint8_t* guest_range_0 = nullptr;

    uint32_t r0 = ctx->gpr[0];
    uint32_t r1 = ctx->gpr[1];
    uint32_t r3 = ctx->gpr[3];
    uint32_t r4 = ctx->gpr[4];
    uint32_t r31 = ctx->gpr[31];
    uint32_t cr = ctx->cr;
    uint32_t xer = ctx->xer;

    goto loc_80787EB0;

loc_80787EB0:
{
    MemoryInline::FlatWriteRam32((r1 + -16), r1);
    r1 = (r1 + -16);
    r0 = ctx->lr;
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r1 + 20), r0);
    MemoryInline::FlatWriteRam32((r1 + 12), r31);
    r0 = MemoryInline::FlatRead32((r3 + 12032));
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r0), static_cast<int32_t>(0));
}

loc_80787ECC:
{
    if (((cr & 0x20000000u) == 0)) {
        goto loc_80787FC4;
    }
}

loc_80787ED0:
{
    r3 = 1344;
    ctx->lr = 0x80787ED8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x80229DCCu>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    SetCRResident(cr, xer, 0, static_cast<int32_t>(r3), static_cast<int32_t>(0));
}

loc_80787EDC:
{
    r31 = r3;
    if (((cr & 0x20000000u) != 0)) {
        goto loc_80787FBC;
    }
}

loc_80787EE4:
{
    ctx->lr = 0x80787EE8u;
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    InvokeDirectCpu<0x8021A0F0u>(ctx);
    r0 = ctx->gpr[0];
    r1 = ctx->gpr[1];
    r3 = ctx->gpr[3];
    r4 = ctx->gpr[4];
    r31 = ctx->gpr[31];
    cr = ctx->cr;
    xer = ctx->xer;
    r3 = 0x808D0000u;
    r4 = (r31 + 16);
    r3 = (r3 + 6152);
    guest_range_0 = MemoryInline::ResolveRangeHost(r31, 0, 1182u, false, true);
    MemoryInline::WriteResolved32(guest_range_0, 0u, r31, r3);
    r0 = (r31 + 32);
    r3 = 0;
}

loc_80787F00:
{
    MemoryInline::FlatWrite32(r4, r3);
    r4 = (r4 + 4);
    SetCRResident(cr, xer, 0, static_cast<uint32_t>(r4), static_cast<uint32_t>(r0));
}

loc_80787F0C:
{
    if (((cr & 0x80000000u) != 0)) {
        goto loc_80787F00;
    }
}

loc_80787F10:
{
    r0 = 0;
    MemoryInline::WriteResolved8(guest_range_0, 1140u, (r31 + 1140), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1141u, (r31 + 1141), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1142u, (r31 + 1142), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1143u, (r31 + 1143), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1144u, (r31 + 1144), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1145u, (r31 + 1145), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1146u, (r31 + 1146), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1147u, (r31 + 1147), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1148u, (r31 + 1148), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1149u, (r31 + 1149), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1150u, (r31 + 1150), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1151u, (r31 + 1151), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1152u, (r31 + 1152), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1153u, (r31 + 1153), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1154u, (r31 + 1154), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1155u, (r31 + 1155), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1156u, (r31 + 1156), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1157u, (r31 + 1157), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1158u, (r31 + 1158), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1159u, (r31 + 1159), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1160u, (r31 + 1160), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1161u, (r31 + 1161), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1162u, (r31 + 1162), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1163u, (r31 + 1163), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1164u, (r31 + 1164), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1165u, (r31 + 1165), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1166u, (r31 + 1166), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1167u, (r31 + 1167), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1168u, (r31 + 1168), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1169u, (r31 + 1169), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1170u, (r31 + 1170), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1171u, (r31 + 1171), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1172u, (r31 + 1172), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1173u, (r31 + 1173), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1174u, (r31 + 1174), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1175u, (r31 + 1175), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1176u, (r31 + 1176), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1177u, (r31 + 1177), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1178u, (r31 + 1178), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1179u, (r31 + 1179), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1180u, (r31 + 1180), static_cast<uint8_t>(r0));
    MemoryInline::WriteResolved8(guest_range_0, 1181u, (r31 + 1181), static_cast<uint8_t>(r0));
}

loc_80787FBC:
{
    r3 = 0x809C0000u;
    MemoryInline::FlatWriteRam32((r3 + 12032), r31);
}

loc_80787FC4:
{
    r31 = MemoryInline::FlatRead32((r1 + 12));
    r3 = 0x809C0000u;
    r0 = MemoryInline::FlatRead32((r1 + 20));
    r3 = MemoryInline::FlatRead32((r3 + 12032));
    ctx->lr = r0;
    r1 = (r1 + 16);
    ctx->gpr[0] = r0;
    ctx->gpr[1] = r1;
    ctx->gpr[3] = r3;
    ctx->gpr[4] = r4;
    ctx->gpr[31] = r31;
    ctx->cr = cr;
    return;
}

}

// RECOMP_GUEST_ABI gpr_read=0xFFFFFFFF gpr_write=0xFFFFFFFF gpr_return=0x00000018 fpr_read=0xFFFFFFFF fpr_write=0xFFFFFFFF fpr_return=0x00000002 cr_read=0xFF cr_write=0xFF xer_read=1 xer_write=1 fence=1
// RECOMP_REGISTRATION base 0x80787EB0 func_80787EB0 preserves=true fpr_mask=0x00000000
